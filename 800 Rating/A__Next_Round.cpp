#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short participants_numbers, participants_count, i, f = 0, count = 0;

    cin >> participants_numbers >> participants_count;

    unsigned short marks_of_participants[participants_numbers];

    for ( i = 0; i < participants_numbers; i++)
    {
        cin >> marks_of_participants[i];
    }

    f = marks_of_participants[participants_count - 1];


    for ( i = 0; i < participants_numbers; i++)
    {
        if (marks_of_participants[i] >= f and marks_of_participants[i] != 0)
        {
            count++;
        }
        
    }
    cout << count << endl;



    return 0;
}