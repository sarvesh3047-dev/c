#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total_marks;
    float agg_marks; 

    printf("Enter the marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
        total_marks = m1 + m2 + m3 + m4 + m5;
        agg_marks = (total_marks / 500.0) * 100;

        printf("Aggregate Marks: %.2f%%\n", agg_marks);

        if (agg_marks >= 75) {
            printf("Grade: Distinction\n");
        } else if ((agg_marks >= 60)&&(agg_marks<75)) {
            printf("Grade: First Division\n");
        } else if ((agg_marks >= 50)&&(agg_marks<60)) {
            printf("Grade: Second Division\n");
        } else {
            printf("Grade: Pass\n");
        }
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}

