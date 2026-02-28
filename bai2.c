/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    
    printf("Nhập username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;
    
    printf("Nhập password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;
    
    if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0) {
        printf("Đăng nhập thành công!\n");
    } else {
        printf("Đăng nhập không thành công!\n");
    }
    
    return 0;
}
