#include <iostream>

using namespace std;

int main()
{
    double uah, usd_rate, eur_rate, btc_rate;
    cout << "Введите количество гривен: ";
    cin >> uah;
    cout << "Введите курс доллара: ";
    cin >> usd_rate;
    cout << "Введите курс евро: ";
    cin >> eur_rate;
    cout << "Введите курс биткоина: ";
    cin >> btc_rate;
    double usd = uah / usd_rate;
    double eur = uah / eur_rate;
    double btc = uah / btc_rate;
    cout << "Гривен: " << uah << endl;
    cout << "Долларов: " << usd << endl;
    cout << "Евро: " << eur << endl;
    cout << "Биткоинов: " << btc
