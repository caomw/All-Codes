#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    /*
        #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Mark\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
*/
     char c[1000000];
     gets(c);
    // cout<<c;

     for(int i=0;i<strlen(c);i++)
     {
  //       cout<<i<<"\n";

         char word1[100000];
         int x=0,u=0;

         while(c[i]!=' ')
         {
             if(c[i]!=' ')
             word1[u++]=c[i++];

         }
         word1[u]='\0';

         cout<<i<<"1\n";
//cout<<word1<<" ";
         for(int j=i;j<strlen(c);j++)
         {
//cout<<"123";
//cout<<i<<"i\n";
         char word2[100000];
         int a2=0;

         while(c[j]!=' ')
         {
             if(c[j]!=' ')
             word2[a2++]=c[j++];

         }
         word2[a2]='\0';
       //  cout<<word2<<"\n";

         int k=0,counti=0,w1=word1[0],w2=word2[0];
         while(w1==w2&&strcmp(word1,word2)!=0)
         {
             k++;
             counti++;
             w1=word1[k];
             w2=word2[k];
         }

//cout<<i<<"qw\n";
         //if(!x&&counti>2)
            cout<<word1<<" "<<i<<" ";//x=1;
         //if(counti>2)
            cout<<word2<<"\n";
     }

 //        cout<<i<<"2\n";
}
}
#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    /*
        #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Mark\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
*/
     char c[1000000];
     gets(c);
    // cout<<c;

     for(int i=0;i<strlen(c);i++)
     {
  //       cout<<i<<"\n";

         char word1[100000];
         int x=0,u=0;

         while(c[i]!=' ')
         {
             if(c[i]!=' ')
             word1[u++]=c[i++];

         }
         word1[u]='\0';

         cout<<i<<"1\n";
//cout<<word1<<" ";
         for(int j=i;j<strlen(c);j++)
         {
//cout<<"123";
//cout<<i<<"i\n";
         char word2[100000];
         int a2=0;

         while(c[j]!=' ')
         {
             if(c[j]!=' ')
             word2[a2++]=c[j++];

         }
         word2[a2]='\0';
       //  cout<<word2<<"\n";

         int k=0,counti=0,w1=word1[0],w2=word2[0];
         while(w1==w2&&strcmp(word1,word2)!=0)
         {
             k++;
             counti++;
             w1=word1[k];
             w2=word2[k];
         }

//cout<<i<<"qw\n";
         //if(!x&&counti>2)
            cout<<word1<<" "<<i<<" ";//x=1;
         //if(counti>2)
            cout<<word2<<"\n";
     }

 //        cout<<i<<"2\n";
}
}

