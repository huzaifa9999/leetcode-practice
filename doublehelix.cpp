//double helix 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    while (true)
    {
        int n1;
        cin >> n1;
         if (n1 == 0) break;
        else
        {
            vector<int> v1(n1);
            for (int i = 0; i < n1; i++)
            {
                cin >> v1[i];
            }
            int n2;
            cin >> n2;
            vector<int> v2(n2);
            for (int i = 0; i < n2; i++)
            {
                cin >> v2[i];
            }

            int s1 = 0, s2 = 0;
            int ans = 0;
            int i = 0, j = 0;

            while (i < n1 && j < n2)
            {
                if (v1[i] < v2[j])
                {
                    s1 += v1[i++];
                }
                else if (v1[i] > v2[j])
                    s2 += v2[j++];

                else
                {
                    ans += max(s1, s2) + v1[i];
                    j++;
                    i++;
                    s1 = s2 = 0;
                }
            }

            while (i < n1)
            {
                s1 += v1[i++];
            }

            while (j < n2)
            {
                s2 += v2[j++];
            }

            ans += max(s1, s2);
cout<<ans<<endl;
        }
    }

    return 0;
}
