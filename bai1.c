/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[1000];
    int nguyen_am = 0, phu_am = 0;
    int i;

    printf("Nhập vào một chuỗi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    chuoi[strcspn(chuoi, "\n")] = 0;

    for (i = 0; chuoi[i] != '\0'; i++) {
        char c = tolower(chuoi[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            nguyen_am++;
        } else if ((c >= 'a' && c <= 'z')) {
            phu_am++;
        }
    }

    printf("Số lượng nguyên âm: %d\n", nguyen_am);
    printf("Số lượng phụ âm: %d\n", phu_am);

    return 0;
}
 