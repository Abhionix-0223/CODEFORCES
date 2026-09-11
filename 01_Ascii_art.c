#include <stdio.h>
int main()
{
    printf("enter the scores of gemini  chatgpt  claude\n");
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        int temp;
        for (int j = i+1; j < 3; j++)
        {
            if (arr[i] >= arr[j ])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    if (arr[2] - arr[0] >= 10)
    {
        printf("check again");
    }
    else
    {
        printf("final %d\n", arr[1]);
    }

    return 0;
}