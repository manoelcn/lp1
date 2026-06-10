#include <iostream>
#include <iterator>
#include <ostream>

template <typename T>
class Par
{
    private:
        T m_primeiroValor;
        T m_segundoValor;

    public:
        Par(T primeiroValor, T segundoValor)
            : m_primeiroValor(primeiroValor), m_segundoValor(segundoValor) {}

        void saida() const
        {
            std::cout << "[" << m_primeiroValor << ", " << m_segundoValor << "]";
        }

        char compararCom(const Par<T> &outroPar) const
        {
            if (m_primeiroValor == outroPar.m_primeiroValor) 
            {
                if (m_segundoValor > outroPar.m_segundoValor) 
                {
                    return '>';
                }
                else if (m_segundoValor < outroPar.m_segundoValor) 
                {
                    return '<';
                }
                else 
                {
                    return '=';
                }
            }
            else 
            {
                if (m_primeiroValor > outroPar.m_primeiroValor) 
                {
                    return '>';
                }
                else if (m_primeiroValor < outroPar.m_primeiroValor) 
                {
                    return '<';
                }
                else 
                {
                    return '=';
                }
            }
        }

        void mostrarComparacao(const Par<T> &outroPar) const
        {
            auto caractere = compararCom(outroPar);
            saida();
            std::cout << " " << caractere << " ";
            outroPar.saida();
            std::cout << std::endl;
        }
};