#include <stdio.h>
int main(){
    int choice;
    // không thể sử dụng float cho switch-case thì switch-case chỉ có thể chạy cho một giá trị cố định là số nguyên còn float là nhiều giá trị khác nhau vì đằng sau còn có nhiều dấu phẩy khác nhau 
    // switch case còn có thể kí tự 
    do{
    printf("1 chương trình kiểm tra số nguyên\n");
    printf("2 chương trình tìm ước chung và bội số chung của 2 số\n");
    printf("3 chương trình tính tiền cho quan karaoke\n");
    printf("4 chương trình tính tiền điện\n");
    printf("5 chương trình chức năng đổi tiền");
    printf("6 chương trình tính lãi suất vay ngân hàng và vay trả góp\n");
    printf("7 chương trình vay tiền mua xe\n");
    printf("8 chương trình sắp xếp thông tin sinh viên\n");
    printf("9 chương trình game fpoly.loot\n");
    printf("0 thoát chương trình\n");
    scanf("%d",&choice);
    switch (choice){
        case 1 : printf(" chức năng kiếm tra số nguyên\n"); 
        break;
        case 2 : printf("chức năng tìm ước chung với bội số chung của 2 số\n");
        break; 
        case 3 : printf("chương trình tính tiền cho quan karaoke\n");
        break; 
        case 4 : printf("chương trình tính tiền điện\n");
        break; 
        case 5 : printf("chức năng đổi tiền\n");
        break;  
        case 6 : printf("chức năng tính lãi suất vay ngân hàng và vay trả góp\n");
        break; 
        case 7 : printf("chức năng vay tiền mua xe\n");
        break; 
        case 8 : printf("chức năng sắp xếp thông tin sinh viên\n");
        break; 
        case 9 : printf("chức năng game fpoly.loot\n");
        break; 
        default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
    }}while(choice !=0);

    return 0;
}

// trước một lựa chọn ở case trước khi printf phải có . hoặc : thì lệnh mới không lỗi 