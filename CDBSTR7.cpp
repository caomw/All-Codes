#include<bits/stdc++.h>
#include<stdio.h>
#include<cstring>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char s1[50005],s2[50005];
        scanf("%s%s",&s1,&s2);

        int arr1[27],arr2[27];
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));

        if(strlen(s1)==strlen(s2))
        {
            for(int i=0;i<strlen(s1);i++)
            {
                arr1[s1[i]-'a']++;
                arr2[s2[i]-'a']++;
            }

            int i;
            for(i=0;i<26;i++)
            {
                if(arr1[i]!=arr2[i])
                    break;
            }

            if(i==26)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }


}
