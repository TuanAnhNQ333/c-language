// Nhập một đoạn văn từ bàn phím, sửa lại định dạng của câu, đoạn văn đó:
// Cách từ chỉ là một ký tự trắng
// Đầu câu viết hoa.
// Thành phần của câu bao gồm ký tự alphabet, số, các ký tự trắng và “.,?!:”, các ký tự khác sẽ bị xóa.
// Từ chỉ chứa ký tự hoặc so
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Hàm để kiểm tra xem ký tự có hợp lệ không
int isValidChar(char c) {
    return isalnum(c) || isspace(c) || c == '.' || c == ',' || c == '?' || c == '!' || c == ':';
}

// Hàm để chỉnh sửa đoạn văn
void formatParagraph(char *paragraph) {
    int len = strlen(paragraph);
    int writeIndex = 0;
    int startOfSentence = 1;

    for (int i = 0; i < len; i++) {
        // Xóa các ký tự không hợp lệ
        if (!isValidChar(paragraph[i])) {
            continue;
        }

        // Xóa các khoảng trắng thừa
        if (isspace(paragraph[i])) {
            if (writeIndex == 0 || isspace(paragraph[writeIndex - 1])) {
                continue;
            }
            paragraph[writeIndex++] = ' ';
        } else {
            // Xử lý ký tự đầu câu
            if (startOfSentence && isalpha(paragraph[i])) {
                paragraph[writeIndex++] = toupper(paragraph[i]);
                startOfSentence = 0;
            } else {
                paragraph[writeIndex++] = paragraph[i];
            }

            // Kiểm tra xem có phải là ký tự kết thúc câu không
            if (paragraph[i] == '.' || paragraph[i] == '?' || paragraph[i] == '!') {
                startOfSentence = 1;
            }
        }
    }

    // Xóa khoảng trắng thừa ở cuối
    if (writeIndex > 0 && isspace(paragraph[writeIndex - 1])) {
        writeIndex--;
    }

    // Kết thúc chuỗi
    paragraph[writeIndex] = '\0';
}

int main() {
    char paragraph[1000];

    // Nhập đoạn văn từ bàn phím
    printf("Nhap mot doan van: ");
    fgets(paragraph, sizeof(paragraph), stdin);

    // Chỉnh sửa đoạn văn
    formatParagraph(paragraph);

    // In đoạn văn đã chỉnh sửa
    printf("Doan van sau khi chinh sua: \n%s\n", paragraph);

    return 0;
}
