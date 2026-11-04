#include <stdio.h>

int main(void) {
    int hour = 0, minute = 0;
    int n = 0;
    int closest = 0;
    int depart_t[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrive_t[8] = {666, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    // 입력한 시간이 어느 시각 사이인지 확인 -> n에 저장
    for(int i = 0; i < 9; i++) {
        if((hour * 60) + minute  < depart_t[i]) {
            n = i;
            break;
        }
    }

    // n이 0 또는 8이면 0, 7번째 원소와 비교
    // n이 다른 숫자면, n-1, n번째 원소와 비교
    if (n == 0) {
        int gap_1 = depart_t[0] - (hour * 60 + minute);
        int gap_2 = (1440 - depart_t[7]) + (hour * 60 + minute);
        if (gap_1 < gap_2) {
            closest = depart_t[0];
        }
        else {
            closest = depart_t[7];
        }
    }
    else if (n == 7) {
        int gap_1 = (hour * 60 + minute) - depart_t[7];
        int gap_2 = (1440 + depart_t[0]) - (hour * 60 + minute);
        if (gap_1 < gap_2) {
            closest = depart_t[7];
        }
        else {
            closest = depart_t[0];
        }
    }
    else {
        int gap_1 = (hour * 60 + minute) - depart_t[n-1];
        int gap_2 = depart_t[n] - (hour * 60 + minute);
        if (gap_1 < gap_2) {
            closest = depart_t[n-1];
        }
        else {
            closest = depart_t[n];
        }
    }
    printf("%d\n", closest);
    hour = closest / 60;
    minute = closest % 60;
    
    printf("Closest departure time is %d:%d ", ((closest % 720) / 60), (closest % 60));

    if (closest < 720) {
        printf("a.m., arriving at ");
    }
    else {
        printf("p.m., arriving at ");
    }

    int arrive_h = (arrive_t[n] % 720) / 60;
    int arrive_m = arrive_t[n] % 60;
    printf("%d:%d ", arrive_h, arrive_m);

    if (arrive_t[n] < 720) {
        printf("a.m.");
    }
    else {
        printf("p.m. \n");
    }
    return 0;
}
