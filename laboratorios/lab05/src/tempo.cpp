#include "../include/tempo.h"
#include <iomanip>

void Tempo::normalizar()
{
    m_minutos = m_minutos + (m_segundos / 60);
    m_segundos = m_segundos % 60;
    m_horas = m_horas + (m_minutos / 60);
    m_minutos = m_minutos % 60;
}

std::ostream &operator<<(std::ostream &os, const Tempo &t)
{
    os << std::setfill('0');
    os << std::setw(2) << t.m_horas << ":" << std::setw(2) << t.m_minutos << ":" << std::setw(2) << t.m_segundos;
    return os;
}

std::istream &operator>>(std::istream &is, Tempo &t)
{
    is >> t.m_horas >> t.m_minutos >> t.m_segundos;
    t.normalizar();
    return is;
}

Tempo Tempo::operator+(const Tempo &outro) const
{
    return Tempo(
        m_horas + outro.m_horas,
        m_minutos + outro.m_minutos,
        m_segundos + outro.m_segundos);
}

Tempo Tempo::operator-(const Tempo &outro) const
{
    int segundos_tempo1 = (m_horas * 3600) + (m_minutos * 60) + m_segundos;
    int segundos_tempo2 = (outro.m_horas * 3600) + (outro.m_minutos * 60) + outro.m_segundos;
    if (segundos_tempo2 > segundos_tempo1)
    {
        return Tempo(0, 0, 0);
    }
    int diferenca = segundos_tempo1 - segundos_tempo2;
    int h = diferenca / 3600;
    int m = (diferenca % 3600) / 60;
    int s = diferenca % 60;
    return Tempo(h, m, s);
}

bool Tempo::operator==(const Tempo &outro) const
{
    int segundos_tempo1 = (m_horas * 3600) + (m_minutos * 60) + m_segundos;
    int segundos_tempo2 = (outro.m_horas * 3600) + (outro.m_minutos * 60) + outro.m_segundos;
    if (segundos_tempo1 == segundos_tempo2)
    {
        return true;
    }
    return false;
}

bool Tempo::operator!=(const Tempo &outro) const
{
    int segundos_tempo1 = (m_horas * 3600) + (m_minutos * 60) + m_segundos;
    int segundos_tempo2 = (outro.m_horas * 3600) + (outro.m_minutos * 60) + outro.m_segundos;
    if (segundos_tempo1 == segundos_tempo2)
    {
        return false;
    }
    return true;
}

bool Tempo::operator<(const Tempo &outro) const
{
    int segundos_tempo1 = (m_horas * 3600) + (m_minutos * 60) + m_segundos;
    int segundos_tempo2 = (outro.m_horas * 3600) + (outro.m_minutos * 60) + outro.m_segundos;
    if (segundos_tempo1 < segundos_tempo2)
    {
        return true;
    }
    return false;
}

bool Tempo::operator>(const Tempo &outro) const
{
    int segundos_tempo1 = (m_horas * 3600) + (m_minutos * 60) + m_segundos;
    int segundos_tempo2 = (outro.m_horas * 3600) + (outro.m_minutos * 60) + outro.m_segundos;
    if (segundos_tempo1 > segundos_tempo2)
    {
        return true;
    }
    return false;
}

bool Tempo::operator<=(const Tempo &outro) const
{
    int segundos_tempo1 = (m_horas * 3600) + (m_minutos * 60) + m_segundos;
    int segundos_tempo2 = (outro.m_horas * 3600) + (outro.m_minutos * 60) + outro.m_segundos;
    if (segundos_tempo1 <= segundos_tempo2)
    {
        return true;
    }
    return false;
}

bool Tempo::operator>=(const Tempo &outro) const
{
    int segundos_tempo1 = (m_horas * 3600) + (m_minutos * 60) + m_segundos;
    int segundos_tempo2 = (outro.m_horas * 3600) + (outro.m_minutos * 60) + outro.m_segundos;
    if (segundos_tempo1 >= segundos_tempo2)
    {
        return true;
    }
    return false;
}

Tempo &Tempo::operator++()
{
    m_segundos++;
    normalizar();
    return *this;
}

Tempo Tempo::operator++(int)
{
    Tempo copia = *this;
    m_segundos++;
    normalizar();
    return copia;
}

Tempo::Tempo() : m_horas(0), m_minutos(0), m_segundos(0) {}

Tempo::Tempo(int h, int m, int s)
    : m_horas(h), m_minutos(m), m_segundos(s)
{
    normalizar();
}
