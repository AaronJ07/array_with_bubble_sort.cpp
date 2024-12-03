#include<iostream>
#include<iomanip>    //used for set decimal places

using namespace std;

//Constant the array size
const int ARR_SIZE = 8;

int main()
{
    float mark[ARR_SIZE] , sum = 0;

    for(int i = 0; i < ARR_SIZE; i++)
    {
        //Get the user input
        cout << "Enter score: ";
        cin >> mark[i];
    }

        //perform bubble sort
        for(int i = 0; i < ARR_SIZE - 1; i++)
        {
            for(int j = 0; j < ARR_SIZE - i - 1; j++)
            {
                float tmp;
                // swap two numbers if the second smaller than the first num
                if(mark[j] > mark[j + 1])
                {
                    tmp = mark[j];
                    mark[j] = mark[j + 1];
                    mark[j + 1] = tmp;

                }
            }
        }

    for(int i = 1; i < ARR_SIZE - 1; i++)
    {
        //Calculate the total points
        sum += mark[i];
    }

    cout << "Score: ";

    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << mark[i] << " ";
    }

    cout << endl;

    //Set the 2 decimal places and print total points
    cout << fixed << setprecision(2) << "The sum of score is " << sum << endl;

    cout << fixed << setprecision(2) << "The highest value is " << mark[ARR_SIZE - 1] << endl;
    cout << fixed << setprecision(2) << "The lowest value is " << mark[0] << endl;

    return 0;

}
