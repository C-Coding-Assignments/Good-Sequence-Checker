#include <stdio.h>
#include <stdbool.h>

int main()
{
    //variable declaration and initialization
    int size, grade;
    bool flag = false;

    //getting sequence length from the user
    printf("Enter the size of sequence: ");
    scanf("%d", &size);
    printf("Enter numbers: ");

    //for loop which iterates from 0 to one less than size
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &grade);

        //conditional statement which checks if grade is greater than or equal to size
        if (grade >= size)
            //for loop which iterates from 1 to grade
            for (int j = 1; j <= grade; j++)
            {
                //conditional statement which checks if square root of grade is less than size
                if (grade % j == 0 && j * j == grade && grade % j < size)
                    break;

                //conditional statement which runs if grade is greater than or equal to size
                else if (j == grade)
                    flag = true;
            }  
    }

    //conditional statement which runs depending on validity of sequence
    (flag) ? (printf("Output: no\n")) : (printf("Output: yes\n"));
    
    return 0;
}
