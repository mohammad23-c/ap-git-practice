#include <stdio.h>

// تعریف سه تابع برای تغییر رنگ متن
void red() {
    printf("\033[0;31m");  // رنگ قرمز
}
void Purple() {
    printf("\033[0;35m");  // رنگ بنفش
}
void Blue () {
    printf("\033[0;34m");  // رنگ آبی
}

int main () {
    // استفاده از توابع رنگی برای تغییر رنگ‌ها در هنگام چاپ متن
    red();
    printf("Hello ");
    Purple();
    printf("world");
    Blue();
    printf("!!!\n");

    return 0;
}
