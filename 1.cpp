#include <iostream>
using namespace std;

struct Person {
    string firstName;
    string lastName;
    int age;
};

double getAvgAge(int count) {
    Person people[count];  // storing all the people
    for (int i = 0; i < count; i++) {
        cout << "Enter first name for person " << i + 1 << ": ";
        cin >> people[i].firstName;

        cout << "Enter last name for person " << i + 1 << ": ";
        cin >> people[i].lastName;

        cout << "Enter age for person " << i + 1 << ": ";
        cin >> people[i].age;

        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += people[i].age;
    }

    return (double)sum / count;
}

int main() {
    int numPeople;
    cout << "How many people you wanna add? ";
    cin >> numPeople;

    double average = getAvgAge(numPeople);
    cout << "Average age is: " << average << endl;

    return 0;
}
