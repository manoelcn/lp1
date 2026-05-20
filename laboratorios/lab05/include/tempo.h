#ifndef TEMPO_H
#define TEMPO_H

#include <iostream>

class Tempo
{
private:
    int m_horas;
    int m_minutos;
    int m_segundos;

    void normalizar();

public:
    friend std::ostream &operator<<(std::ostream &os, const Tempo &t);
    friend std::istream &operator>>(std::istream &is, Tempo &t);
    Tempo operator+(const Tempo &outro) const;
    Tempo operator-(const Tempo &outro) const;
    bool operator==(const Tempo &outro) const;
    bool operator!=(const Tempo &outro) const;
    bool operator<(const Tempo &outro) const;
    bool operator>(const Tempo &outro) const;
    bool operator<=(const Tempo &outro) const;
    bool operator>=(const Tempo &outro) const;
    Tempo &operator++();
    Tempo operator++(int);

    Tempo();
    Tempo(int h, int m, int s);
};

#endif