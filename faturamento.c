#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>

int main() {

    float SP = 67836.43, RJ = 36678.66, MG = 29229.88;
    float ES = 27165.48, Outros = 19849.53;

    float total_faturamento = SP + RJ + MG + ES + Outros;

    float percentual_sp = (SP / total_faturamento) * 100;
    float percentual_rj = (RJ / total_faturamento) * 100;
    float percentual_mg = (MG / total_faturamento) * 100;
    float percentual_es = (ES / total_faturamento) * 100;
    float percentual_outros = (Outros / total_faturamento) * 100;

    printf("Faturamento total: R$ %.2f\n", total_faturamento);
    printf("Percentual de SP: %.2f%%\n", percentual_sp);
    printf("Percentual de RJ: %.2f%%\n", percentual_rj);
    printf("Percentual de MG: %.2f%%\n", percentual_mg);
    printf("Percentual de ES: %.2f%%\n", percentual_es);
    printf("Percentual de Outros: %.2f%%\n", percentual_outros);

    return 0;
}
