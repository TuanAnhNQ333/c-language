// •Danh sách các mã sản phẩm và miêu tả tương ứng của một cửa hàng như sau:
// "TV127 31 inch Television",
// "CD057 CD Player",
// "TA877 Answering Machine",
// "CS409 Car Stereo",
// "PC655 Personal Computer"
// •Lưu danh sách này vào một mảng các xâu và viết 1 chương trình cho phép ngườidung tra cứu miêu tả sản phẩm 
// bằng cách nhập vào tất cả hay một phần của mã sản phẩm. In theo thứ tự bảng trên, mỗi sản phẩm một dòng. Nếu không tìm thấy in ra "None".
#include<stdio.h>
#include<string.h>
void danhsach() 
{
    char string[5] = {'TV127 31 inch Television', 'CD057 CD Player', 'TA877 Answering Machine', 'CS409 Car Stereo', 'PC655 Personal Computer'};
    char temp;
    int i, j;
    
    
    int size = strlen(string);
 
    printf("Chuoi truoc khi sap xep: %s \n", string);
 
    for (i = 0; i < size-1; i++) {
        for (j = i+1; j < size; j++) {
            if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
            
         }
      }
   }
}
int main() {
    char string[101];
    danhsach();
    printf("%s", string);
    return 0;

}