#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

typedef struct dados{
    int dia, mes, ano;
    char nome[30];
};
typedef struct DataA{
    int dia, mes, ano;
};

dados Data ( dados *data)
{
    system("cls");
    cout << "Insira sua data de nascimento!!!\n\n";
    cout << "DIA:";
    cin >> data->dia;
    cout << "\nMES:";
    cin >> data->mes;
    cout << "\nANO:";
    cin >> data->ano;

    return *data;

}

DataA dataAtual (DataA *dataA)
{
    system("cls");
    time_t mytime;
    mytime = time (NULL);
    struct tm tm = *localtime(&mytime);

    dataA->dia = tm.tm_mday;
    dataA->mes =  tm.tm_mon +1;
    dataA->ano = tm.tm_year + 1900;

    //cout << dataA.dia << dataA.mes << dataA.ano;

    return *dataA;

}

int main (){
    int idade=0;
    DataA dataA;
    DataA *p1;
    dados data;
    dados *p;

    p = &data;
    p1 = &dataA;

    cout << "NOME:";
    fgets(data.nome, 30, stdin);

    Data(p);
    dataAtual(p1);

    idade = dataA.ano - data.ano -1;

    if(dataA.dia == data.dia && dataA.mes == data.mes)
        idade+=1;
    
    cout << data.nome;
    cout << idade;

    return 0;
}