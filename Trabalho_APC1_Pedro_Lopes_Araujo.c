#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Variaveis Globais
float Pi = 3.14;

//Interfaces
void Interface()
{
    printf("////////////\n");
    printf("Programa Funções\n");
    printf("1-> Volume da Esfera\n");
    printf("2-> Calcular Médias de Alunos\n");
    printf("3-> Verificar se um número é primo\n");
    printf("4-> Bhaskara\n");
    printf("5-> Convertor de Segundos\n");
    printf("6-> Conversor de Idade para Dias\n");
    printf("7-> Verificar se um numero e perfeito\n");
    printf("8-> Categoria do Nadador\n");
    printf("9-> Fatorial de Vetores\n");
    printf("10-> União de Vetores\n");
    printf("11-> Separar Pares e Ímpares\n");
    printf("12-> Contar Valores Pares\n");
    printf("13-> Soma dos Elementos de um Vetor\n");
    printf("14-> Soma de Dois Vetores \n");
    printf("15-> Produto de Dois Vetores \n");
    printf("16-> Soma dos Elementos de uma Matriz (5x5)\n");
    printf("17-> Soma das Diagonais de uma Matriz (6x6)\n");
    printf("18-> Soma de Linha e Coluna Específica (7x6)\n");
    printf("19-> Menor Elemento da Diagonal Secundária (6x6)\n");
    printf("0-> Sair\n");
    printf("////////////\n");

}

void Limpar() 
{
    printf("\e[1H\e[2J");
}

void Enter()
{
    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}

//Funções 

void MenorDiagonalSecundaria()
{
    Limpar();
    int A[6][6];
    int menor;

    printf("// Menor Elemento da Diagonal Secundária (Matriz 6x6) //\n");
    
    printf("Preencha a Matriz A (6 linhas e 6 colunas):\n");
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("Digite o valor para A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    menor = A[0][5];

    for (int i = 1; i < 6; i++) 
    {
        if (A[i][5 - i] < menor) 
        {
            menor = A[i][5 - i];
        }
    }

    printf("\n/// Resultados ///\n");
    printf("Matriz A:\n");
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("[%d]\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nO menor elemento da Diagonal Secundária é: %d\n", menor);
}

void SomaLinhaColunaMatriz()
{
    Limpar();
    int A[7][6];
    int somaLinha5 = 0;
    int somaColuna3 = 0;

    printf("// Soma da Linha 5 e Coluna 3 de uma Matriz 7x6 //\n");
    
    printf("Preencha a Matriz A (7 linhas e 6 colunas):\n");
    for (int i = 0; i < 7; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("Digite o valor para A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int j = 0; j < 6; j++) 
    {
        somaLinha5 += A[4][j];
    }

    for (int i = 0; i < 7; i++) 
    {
        somaColuna3 += A[i][2];
    }

    printf("\n/// Resultados ///\n");
    printf("Matriz A:\n");
    for (int i = 0; i < 7; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("[%d]\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos da Linha 5 (índice 4): %d\n", somaLinha5);
    printf("Soma dos elementos da Coluna 3 (índice 2): %d\n", somaColuna3);
}

void DiagonaisMatriz()
{
    Limpar();
    int A[6][6];
    int somaPrincipal = 0;
    int somaSecundaria = 0;

    printf("// Soma das Diagonais de uma Matriz 6x6 //\n");
    
    printf("Preencha a Matriz A (6 linhas e 6 colunas):\n");
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("Digite o valor para A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Processamento das diagonais
    for (int i = 0; i < 6; i++) 
    {
        somaPrincipal += A[i][i];  
        somaSecundaria += A[i][5 - i];  
    }

    printf("\n/// Resultados ///\n");
    printf("Matriz A:\n");
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("[%d]\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da Diagonal Principal: %d\n", somaPrincipal);
    printf("Soma da Diagonal Secundária: %d\n", somaSecundaria);
}

void SomaElementosMatriz()
{
    Limpar();
    int A[5][5];
    int soma = 0;

    printf("// Soma dos Elementos de uma Matriz 5x5 //\n");
    
    printf("Preencha a Matriz A:\n");
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("Digite o valor para A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            soma += A[i][j];
        }
    }

    printf("\n/// Resultados ///\n");
    printf("Matriz A:\n");
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("[%d]\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma de todos os elementos da matriz é: %d\n", soma);
}

void ProdutoDoisVetores()
{
    Limpar();
    int A[5];
    int B[5];
    int Produto[5];

    printf("// Produto de Dois Vetores //\n");
    
    printf("Preencha o Vetor A:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Digite o valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nPreencha o Vetor B:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Digite o valor para B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) 
    {
        Produto[i] = A[i] * B[i];
    }

    printf("\n/// Resultados ///\n");
    printf("Vetor A: ");
    for (int i = 0; i < 5; i++) printf("[%d] ", A[i]);

    printf("\nVetor B: ");
    for (int i = 0; i < 5; i++) printf("[%d] ", B[i]);

    printf("\nVetor Produto: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("[%d] ", Produto[i]);
    }
    printf("\n");
}

void SomaDoisVetores()
{
    Limpar();
    int A[5];
    int B[5];
    int Soma[5];

    printf("// Soma de Dois Vetores//\n");
    
    printf("Preencha o Vetor A:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Digite o valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nPreencha o Vetor B:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Digite o valor para B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) 
    {
        Soma[i] = A[i] + B[i];
    }

    printf("\n/// Resultados ///\n");
    printf("Vetor A: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("[%d] ", A[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("[%d] ", B[i]);
    }

    printf("\nVetor Soma: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("[%d] ", Soma[i]);
    }
    printf("\n");
}

void SomaElementosVetor()
{
    Limpar();
    float X[10];
    float soma = 0;

    printf("// Soma dos Elementos de um Vetor //\n");
    
    printf("Preencha o Vetor X:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Digite o valor para X[%d]: ", i);
        scanf("%f", &X[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        soma += X[i];
    }

    printf("\n/// Resultados ///\n");
    printf("Vetor X: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("[%.2f] ", X[i]);
    }

    printf("\n\nA soma de todos os elementos é: %.2f\n", soma);
}

void ContarValoresPares()
{
    Limpar();
    int X[15];
    int contPares = 0;

    printf("// Contar Valores Pares em um Vetor //\n");
    
    printf("Preencha o Vetor X:\n");
    for (int i = 0; i < 15; i++) 
    {
        printf("Digite o valor para X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 15; i++) 
    {
        if (X[i] % 2 == 0) 
        {
            contPares++;
        }
    }

    printf("\n/// Resultados ///\n");
    printf("Vetor X: ");
    for (int i = 0; i < 15; i++) 
    {
        printf("[%d] ", X[i]);
    }

    printf("\n\nQuantidade de valores pares no vetor: %d\n", contPares);
}

void SepararParesImpares()
{
    Limpar();
    int X[10];
    int A[10];
    int B[10];
    int contA = 0; 
    int contB = 0; 

    printf("// Separar Elementos Pares e Impares //\n");
    
    printf("Preencha o Vetor X:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Digite o valor para X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        if (X[i] % 2 == 0) 
        {
            A[contA] = X[i];
            contA++;
        } else 
        {
            B[contB] = X[i];
            contB++;
        }
    }

    printf("\n/// Resultados ///\n");
    printf("Vetor X (Original): ");
    for (int i = 0; i < 10; i++) 
    {
        printf("[%d] ", X[i]);
    }

    printf("\nVetor A (Pares): ");
    if (contA == 0) 
    {
        printf("Nenhum elemento par encontrado.");
    } else 
    {
        for (int i = 0; i < contA; i++) 
        {
            printf("[%d] ", A[i]);
        }
    }

    printf("\nVetor B (Impares): ");
    if (contB == 0) 
    {
        printf("Nenhum elemento ímpar encontrado.");
    } else 
    {
        for (int i = 0; i < contB; i++) 
        {
            printf("[%d] ", B[i]);
        }
    }
    printf("\n");
}

void UniaoVetores()
{
    Limpar();
    int A[10];
    int B[10];
    int Uniao[20]; 
    int k = 0;     

    printf("// Uniao de Dois Vetores //\n");
    
    printf("Preencha o Vetor A:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Digite o valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nPreencha o Vetor B:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Digite o valor para B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        int repetido = 0;
        for (int j = 0; j < k; j++) 
        {
            if (A[i] == Uniao[j]) 
            {
                repetido = 1;
                break;
            }
        }
        if (!repetido) 
        {
            Uniao[k] = A[i];
            k++;
        }
    }

    for (int i = 0; i < 10; i++) 
    {
        int repetido = 0;
        for (int j = 0; j < k; j++) 
        {
            if (B[i] == Uniao[j]) 
            {
                repetido = 1;
                break;
            }
        }
        if (!repetido) 
        {
            Uniao[k] = B[i];
            k++;
        }
    }

    printf("\n/// Resultados ///\n");
    printf("Vetor A: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("[%d] ", A[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("[%d] ", B[i]);
    }

    printf("\nVetor Uniao: ");
    for (int i = 0; i < k; i++) 
    {
        printf("[%d] ", Uniao[i]);
    }
    printf("\n");
}

void CalcularFatorialVetor(int A[], int B[])
{
    for (int i = 0; i < 10; i++) 
    {
        int fat = 1;
        for (int j = 1; j <= A[i]; j++) 
        {
            fat *= j;
        }
        B[i] = fat;
    }
}

void FatorialVetores()
{
    Limpar();
    int A[10];
    int B[10];

    printf("/// Fatorial de Elementos do Vetor ///\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Digite o valor para a posicao %d do vetor A: ", i);
        scanf("%d", &A[i]);
        
        while (A[i] < 0) 
        {
            printf("Valor invalido! O numero deve ser maior ou igual a zero.\n");
            printf("Digite novamente para a posicao %d: ", i);
            scanf("%d", &A[i]);
        }
    }

    CalcularFatorialVetor(A, B);

    printf("\n--- Resultados ---\n");
    printf("Vetor A: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("[%d] ", A[i]);
    }
    
    printf("\nVetor B: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("[%d] ", B[i]);
    }
    printf("\n");
}

void DeterminarCategoria(int idade, char categoria[])
{
    if (idade >= 5 && idade <= 7) 
    {
        sprintf(categoria, "Infantil A");
    } else if (idade >= 8 && idade <= 10)
    {
        sprintf(categoria, "Infantil B");
    } else if (idade >= 11 && idade <= 13) 
    {
        sprintf(categoria, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) 
    {
        sprintf(categoria, "Juvenil B");
    } else if (idade >= 18) 
    {
        sprintf(categoria, "Adulto");
    } else 
    {
        sprintf(categoria, "Sem categoria (Idade insuficiente)");
    }
}

void CategoriaNadador()
{
    Limpar();
    int idade;
    char categoria[50];

    printf("--- Categoria do Nadador ---\n");
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    DeterminarCategoria(idade, categoria);
    printf("\nA categoria desse nadador é: %s\n", categoria);
}

bool sePerfeito(int numero)
{
    if (numero <= 0) 
    {
        return false;
    }

    int soma_divisores = 0;

    for (int i = 1; i <= numero / 2; i++) 
    {
        if (numero % i == 0) 
        {
            soma_divisores += i;
        }
    }

    if (soma_divisores == numero) 
    {
        return true;
    } else 
    {
        return false;
    }
}

void NumeroPerfeito()
{
    Limpar();
    int num;

    printf("--- Verificador de Numero Perfeito ---\n");
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (sePerfeito(num)) 
    {
        printf("O numero %d e perfeito!\n", num);
    }else 
    {
        printf("O numero %d não e perfeito.\n", num);
    }
}

void Idade()
{
    Limpar();
    int anos, meses, dias;

    printf("/// Conversor de Idade para Dias ///\n");
    
    printf("Digite os anos: ");
    scanf("%d", &anos);
    while(anos < 0) 
    {
        printf("Valor invalido! Digite um valor positivo para os anos: ");
        scanf("%d", &anos);
    }

    printf("Digite os meses: ");
    scanf("%d", &meses);
    while(meses < 0 || meses > 12) 
    {
        printf("Valor invalido! Os meses devem ser entre 0 e 12: ");
        scanf("%d", &meses);
    }

    printf("Digite os dias: ");
    scanf("%d", &dias);
    while(dias < 0 || dias > 31) 
    {
        printf("Valor invalido! Os dias devem ser entre 0 e 31: ");
        scanf("%d", &dias);
    }

    int total_dias = (anos * 365) + (meses * 30) + dias;

    printf("\nA idade expressa totalmente em dias e: %d dias\n", total_dias);
}

void TempoFabrica()
{
    Limpar();
    int tempo_segundos;

    printf("/// Conversor de Tempo de Fabrica ///\n");
    printf("Digite o tempo de duracao em segundos: ");
    scanf("%d", &tempo_segundos);

    while (tempo_segundos < 0) 
    {
        printf("Tempo invalido! O tempo deve ser positivo.\n");
        printf("Digite novamente: ");
        scanf("%d", &tempo_segundos);
    }

    int horas = tempo_segundos / 3600;          
    int resto = tempo_segundos % 3600;       
    int minutos = resto / 60;                    
    int segundos = resto % 60;                   

    printf("\nTempo convertido:\n");
    printf("%dh : %dm : %ds\n", horas, minutos, segundos);
}

void Bhaskara()
{
    Limpar();
    float a, b, c;

    printf("/// Formula de Bhaskara ////\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) 
    {
        printf("Nao foi possivel calcular! (a nao pode ser igual a 0).\n");
        return;
    }

    float delta = (b * b) - (4 * a * c);

    if (delta < 0) 
    {
        printf("Nao foi possivel calcular! (Delta e negativo: %.2f).\n", delta);
    } else 
    {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("Delta positivo ou zero! Raizes encontradas:\n");
        printf("X'  = %.2f\n", raiz1);
        printf("X'' = %.2f\n", raiz2);
    }
}

void ValorPrimo()
{
    Limpar();
    int numero;
    int e_primo = 1; 

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &numero);

    while (numero < 0) 
    {
        printf("Valor invalido! O numero deve ser positivo.\n");
        printf("Digite novamente: ");
        scanf("%d", &numero);
    }

    if (numero <= 1) 
    {
        e_primo = 0;
    } else 
    {
        for (int i = 2; i * i <= numero; i++) 
        {
            if (numero % i == 0) 
            {
                e_primo = 0;
                break; 
            }
        }
    }
    if (e_primo == 1)
    {
        printf("O número %d é PRIMO!\n", numero);
    } else 
    {
        printf("O número %d não é primo.\n", numero);
    }
}

void VolumeEsfera()
{
    Limpar();
    float raio;
    printf("Digite o raio da esfera:");
    scanf("%f",&raio);

    float volume = (4.0 / 3.0) * Pi * (raio * raio * raio);
    printf("Volume da esfera é: %.2f",volume);
}

void MediaAlunos()
{
    Limpar();
    float a,b,c;
    char entrada;

    printf("/////////////\n");
    printf("Menu Medias\n");
    printf("A-> Média Aritmética\n");
    printf("P-> Média Ponderada\n");
    printf("H-> Média Harmônica\n");
    printf("S-> Sair\n");
    printf("/////////////\n");
    scanf(" %c",&entrada);

    if(entrada == 's' || entrada == 'S')
    {
        return;
    }

    Limpar();
    printf("Digite nota aluno A: ");
    scanf("%f", &a);
    while (a < 0 || a > 10) {
        printf("Nota invalida! A nota deve ser entre 0 e 10.\n");
        printf("Digite novamente a nota do aluno A: ");
        scanf("%f", &a);
    }
    printf("Digite nota aluno B: ");
    scanf("%f", &b);
    while (b < 0 || b > 10) {
        printf("Nota invalida! A nota deve ser entre 0 e 10.\n");
        printf("Digite novamente a nota do aluno B: ");
        scanf("%f", &b);
    }
    printf("Digite nota aluno C: ");
    scanf("%f", &c);
    while (c < 0 || c > 10) {
        printf("Nota invalida! A nota deve ser entre 0 e 10.\n");
        printf("Digite novamente a nota do aluno C: ");
        scanf("%f", &c);
    }

    if(entrada == 'a' || entrada == 'A')
    {
        float mediaA = (a + b + c )/ 3;
        printf("A média aritmética dos alunos é de:%.2f",mediaA);        
    }else if(entrada == 'p' || entrada == 'P')
    {
        float mediaP =((a * 5) + (b * 3) + (c * 2)) / 10;
        printf("A média ponderada dos alunos é de:%.2f",mediaP); 
    }else if(entrada == 'h' || entrada == 'H')
    {
        float mediaH = 3.0 / ((1.0 / a) + (1.0 / b) + (1.0 / c));
        printf("A media harmonica os alunos e de: %.2f\n", mediaH);
    }

}

int main()
{
    int entrada = 0;
    while(1)
    {
        Limpar();
        Interface();
        scanf("%d",&entrada);
        if(entrada == 0)
        {
            Limpar();
            printf("Programa encerrado!");
            return 0;
        }
        switch (entrada)
        {
            case 1:
                VolumeEsfera();
                Enter();
            break;
            case 2:
                MediaAlunos();
                Enter();
            break;
            case 3:
                ValorPrimo();
                Enter();
            break;
            case 4:
                Bhaskara();
                Enter();
            break;
            case 5:
                TempoFabrica();
                Enter();
            break;
            case 6:
                Idade();
                Enter();
            break;
            case 7:
                NumeroPerfeito();
                Enter();
            break;
            case 8:
                CategoriaNadador();
                Enter();
            break;
            case 9:
                FatorialVetores();
                Enter();
            break;
            case 10:
                UniaoVetores();
                Enter();
            break;
            case 11:
                SepararParesImpares();
                Enter();
            break;
            case 12:
                ContarValoresPares();
                Enter();
            break;
            case 13:
                SomaElementosVetor();
                Enter();
            break;                   
            case 14:
                SomaDoisVetores();   
                Enter();
            break;
            case 15:
                ProdutoDoisVetores();
                Enter();
            break;
            case 16:
                SomaElementosMatriz();
                Enter();
            break;
            case 17: 
                DiagonaisMatriz(); 
                Enter(); 
            break;
            case 18: 
                SomaLinhaColunaMatriz(); 
                Enter(); 
            break;
            case 19: 
                MenorDiagonalSecundaria(); 
                Enter(); 
            break;
            default:
                printf("Opcao invalida!");
                Enter();
            break;
        }
    }
}