#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {

        //  Input Part:
        int N;
        scanf("\n%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        int S;
        scanf("%d", &S);

        //  Find The Index Part:
        int FindIndex = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[j] == S)
            {
                FindIndex = j;
                break;
            }
            else
            {
                FindIndex = -1;
            }
        }

        //  Output Part:
        if (FindIndex != -1)
            printf("Case %d: %d\n", i + 1, FindIndex + 1);
        else
            printf("Case %d: Not Found\n", i + 1);
    }

    return 0;
}