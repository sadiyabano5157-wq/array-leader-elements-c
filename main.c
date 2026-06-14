#include<stdio.h>

int main()
{
    int arr[6] = {16,17,5,3,2,1};
    int leader;

    for(int i = 0; i < 6; i++)
    {
        leader = 1;

        for(int j = i + 1; j < 6; j++)
        {
            if(arr[j] > arr[i])
            {
                leader = 0;
                break;
            }
        }

        if(leader == 1)
        {
            printf("Leader = %d\n", arr[i]);
        }
    }

    return 0;
}
