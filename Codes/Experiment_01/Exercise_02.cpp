#include <iostream>
using namespace std;

class Batsman
{
private:
    int batsman_code;
    string batsman_name;
    int total_innings;
    int notout_innings;
    int total_runs;

    int calcavg (int total_runs, int total_innings, int notout_innings)
    {
        int batting_avg = total_runs / (total_innings - notout_innings);

        return batting_avg;
    }

public:
    int batting_avg;
    void readdata (int code, string name, int innings, int notoutinnings, int runs)
    {
        batsman_code = code;
        batsman_name = name;
        total_innings = innings;
        notout_innings = notoutinnings;
        total_runs = runs;
        batting_avg = calcavg (total_runs, total_innings, notout_innings);
    }

    void displaydata ()
    {
        cout << "Batsman Name: " << batsman_name << endl;
        cout << "Batsman Code: " << batsman_code << endl;
        cout << "Total Innings: " << total_innings << endl;
        cout << "Not Out Innings: " << notout_innings << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Batting Average: " << batting_avg << endl;
    }
};

int main ()
{
    Batsman Amla;
    Amla . readdata (01, "Hashim Amla", 200, 100, 5000);
    Amla . displaydata();

    return 0;
}