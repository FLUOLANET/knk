#include <stdio.h>

// 840 -> 2:00 p.m. 형식으로 출력하는 함수
void print_ampm_t(int t) {
    int new_t = 0;
    if (t > 779) {
        new_t = t % 720;
    }
    else {
        new_t = t;
    }
    
    int hr = new_t / 60;
    int min = new_t % 60;
    
    if (t >= 720) {
        printf("%d:%02d p.m.", hr, min);
    }
    else {
        printf("%d:%02d a.m.", hr, min);
    }
    
}

int main(void) {
    int hour = 0, minute = 0;
    int n = 0;
    int closest = 0;
    int depart_t[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrive_t[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    // 입력
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    
    // 시각을 정수(크기)로 변환
    int converted = hour * 60 + minute;

    // 입력한 시간이 어느 시각 사이인지 확인 -> n에 저장
    for(int i = 0; i < 9; i++) {
        if (i == 8) {
            n = 8;
        }
        else if(converted  < depart_t[i]) {
            n = i;
            break;
        }
    }

    // n이 0 또는 8이면 0, 7번째 원소와 비교
    // n이 다른 숫자면, n-1, n번째 원소와 비교
    if (n == 0) {
        if ( depart_t[0] - converted < 1440 - depart_t[7] + converted) {
            closest = 0;
        }
        else {
            closest = 7;
        }
    }
    else if (n == 8) {
        if (converted - depart_t[7] < depart_t[0] + 1440 - converted) {
            closest = 7;
        }
        else {
            closest = 0;
        }
    }
    else {
        if (converted - depart_t[n-1] < depart_t[n] - converted) {
            closest = n - 1;
        }
        else {
            closest = n;
        }
    }

    printf("Closest departure time is ");
    print_ampm_t(depart_t[closest]);
    printf(", arriving at ");
    print_ampm_t(arrive_t[closest]);
    printf("\n");

    return 0;
}
