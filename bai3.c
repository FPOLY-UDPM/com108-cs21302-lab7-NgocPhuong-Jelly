/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

#include <stdio.h>
#include <string.h>

int main() {
    char s[5][20];
    char t[20];
    int i, j;
    
    printf("Nhập 5 chuỗi bất kỳ:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", s[i]);
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (strcmp(s[j], s[j + 1]) > 0) {
                strcpy(t, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], t);
            }
        }
    }
    
    printf("\nThứ tự các chuỗi đã sắp xếp:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
    
    return 0;
}
