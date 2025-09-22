#include<iostream>
#include<string>
#include<algorithm>
#include<vector>



int findMax()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> arr[i];
    }

    while (true)
    {
        int max = arr[0];
        for(int i = 1; i < 5; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        std::cout << "The maximum number is: " << max << std::endl;
        break;
    }


    return 0;
}


void reverseName()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Your name has " << name.length() << " characters." << std::endl;
    std::string reversedName = "";
    for(int i = name.length() - 1; i >= 0; i--)
    {
        reversedName += name[i];
    }
    std::cout << "Reversed name: " << reversedName << std::endl;

}


int getAverage()
{
    std::vector<int> numbers;
    int sum = 0;
    for(int i = 0; i < 5; i++)
        {
            int num;
            std::cout << "Enter number " << i+1 << ": ";
            std::cin >> num;
            numbers.push_back(num);
            sum += num;
        }
        double average = static_cast<double>(sum) / numbers.size();

        std::cout << "The average is: " << average << std::endl;


    return 0;
}



int main()
{

findMax();

reverseName();

getAverage();








std::cout << "Press Enter to exit...";
std::cin.ignore();
std::cin.get();
return 0;


}