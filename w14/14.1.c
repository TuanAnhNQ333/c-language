#include <stdio.h>
// struct la kieu du lieu co the chua nhieu kieu du lieu khac -> ko cho scanf vao
struct Date
{
    int day;
    int month;
    int year;
};
// tenbien.kieudulieu
void datecmp(struct Date a, struct Date b)
{

    if (a.year < 0 || b.year < 0 || a.day < 0 || a.day > 31 || b.day < 0 || b.day > 31 || a.month < 0 || b.month < 0 || a.month > 12 || b.month > 12)
    {
        printf("Khong hop le");
    }
    else
    {
        if (a.year == b.year)
        {
            if (a.month == b.month)
            {
                if (a.day == b.day)
                {
                    printf("0");
                }
                if (a.day < b.day)
                {
                    printf("-1\n");
                }
                if (a.day > b.day)
                {
                    printf("1\n");
                }
            }
            if (a.month < b.month)
            {
                printf("-1\n");
            }
            if (a.month > b.month)
            {
                printf("1\n");
            }
        }
        if (a.year < b.year)
        {
            printf("-1\n");
        }
        if (a.year > b.year)
        {
            printf("1\n");
        }
    }
}
int main()
{
    struct Date day1;
    struct Date day2;
    scanf("%d/%d/%d", &day1.day, &day1.month, &day1.year);
    scanf("%d/%d/%d", &day2.day, &day2.month, &day2.year);
    datecmp(day1, day2);
    return 0;
}