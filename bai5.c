#include <stdio.h>
#include "hamNhan.h"

int tong(int a, int b)
{
    return a + b;
}
void main()
{
    int a = 100, b = 1321, c;
    c = tong(a, b);
    hamNhan(a, b);
}
// 1. t sài git ở đây
// 2. trỏ tới đâu
// 3. đẩy dữ liệu lên github:
//       - git add . ( chấm có nghĩa là đẩy hết file dưới đây lên)
//       - git commit -m "" (để lại note)
//       - git push

// 4. Lấy dự án về :
//       - mở folder cần lấy dự án --> chuột phải --> Git Bash here
//       - git clone + link --> Lấy 1 dự án có sẵn về máy
//       - git pull --> đồng bộ hóa với kho trước

// sự thay đổi từ khi lấy về
// --> git pull
// conflict --> vì sửa cùng 1 file