/*

Vetores: cobnhecido como array
coleção de elementos na memória
acesso direto por índices (começando pelo 0)


----------------VETORES-----------------------------
int numeros[5]; // declaração de um vetor de inteiros

// inicializando os elementos do vetor
numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;
numeros[3] = 40;
numeros[4] = 50;

// acessando elementos do vetor

printf("O primeiro elemento é %d\n", numeros[0]);
printf("O segundo elemento é %d\n", numeros[1]);



---------------- MATRIZES-----------------------------

também conhecido como arrayz multidimensional

contém linhas e colunas

forma mais comum de utilização é bidimensional

múltiplos índices ex: Y J
>linha
>coluna

---------------------bidimensiona, exemplo:-----------------------------------

int matriz [3] [3]; //declaração de uma matrix 3x3
matriz [0] [0] = 1; //inicializando os elementos da matriz
matriz [0] [1] = 2;
matriz [0] [2] = 3;
matriz [1] [0] = 4;
matriz [1] [1] = 5;
matriz [1] [2] = 6;
matriz [2] [0] = 7;
matriz [2] [1] = 8;
matriz [2] [2] = 9;

// acessando os elementos da matriz

printf("O elemento da posição [0] [0] é %d\n", matriz [0] [0]);
printf("O elemento na posição [1] [1] é %d\n", matriz [1] [1]);


return 0;


-------------------inicialização simplificada-------------------------------------

semelhante a vetores
declara os valores de todos os índices no início

int matriz [3][3] = {
{1,2,3},
{4,5,6},
{7,8,9}


};   

//o [1][1] é o numero 5


--------------------------------Conclusão------------------------------------------

Tamanho fixo, não pode ser alterado em execução

acesso por índices, começando do zero
todos os elementos devem possuir o mesmo tipo
essencial para programas eficientes e eficazes


------------------------------------------------------------------------------------














*/