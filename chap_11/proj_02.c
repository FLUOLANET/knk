#include <stdio.h>
#define N 8

// find the flight whose departure time is closest to desired_time
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    int dept_t[N] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrv_t[N] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int closest_idx = 0;
    int n = 0;

    // 가장 desired_time과 가장 가까운 출발시각 dept_t에서 찾아서 closest에 저장
    // 1) desired_time이 첫 번째 출발 시각보다 작은 경우
    if(desired_time <= dept_t[0]) {
        closest_idx = (dept_t[0] - desired_time < 1440 - dept_t[N - 1] + desired_time) ? 0 : N - 1;
    }
    // 2) desired_time이 마지막 출발 시각보다 큰 경우
    else if(desired_time >= dept_t[N - 1]) {
        closest_idx = (desired_time - dept_t[N - 1] < dept_t[0] + 1440 - desired_time) ? N - 1 : 0;
    }
    // 3) 일반적인 경우
    else {
        for(int i = 0; i < N; i++) {
            if(dept_t[i] <= desired_time && desired_time <= dept_t[i + 1]){
                n = i;
            }
        }
        // n 정해짐
        closest_idx = (desired_time - dept_t[n] < dept_t[n + 1] - desired_time) ? n : n + 1;
    }

    *departure_time = dept_t[closest_idx];
    *arrival_time = arrv_t[closest_idx];
}

void amorpm(int t) {
    int hour = (t < 780) ? (t / 60) : ((t % 720) / 60);
    int minute = t % 60;
    if (t < 720) {
        printf("%d:%02d a.m.", hour, minute);
    }
    else {
        printf("%d:%02d p.m.", hour, minute);
    }
}

int main(void) {
    int hr = 0, min = 0;
    int des_t = 0;
    int departure_time = 0, arrival_time = 0;
    
    // 입력받아서 minute expression 으로 변환
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);
    des_t = 60 * hr + min;

    find_closest_flight(des_t, &departure_time, &arrival_time);

    printf("Closest departure time is ");
    amorpm(departure_time);
    printf(", arriving at ");
    amorpm(arrival_time);
    printf("\n");

    return 0;
}