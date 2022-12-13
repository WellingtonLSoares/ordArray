# Lista ordenada em C

## <b>Sobre o código:</b> 
- Esse código foi desenvolvido usando a <b>Linguagem C</b>, na disciplina de <b>Laboratório de Programação</b> orientada pelo professor <b>Marcio Costas Santos</b>.

- <b>Problema apresentado pelo professor:</b> Em anexo está um código um arquivo .h que deve ter todas as suas funções implementadas em um arquivo .c. Cada um dos alunos deve implementar todas as funções de acordo com a descrição de seu
comportamento presente no arquivo e explicado em sala.

- O problema apresentado tinha um desafio de <b>criar um vetor ordenado com base em uma função personalizada do tipo COMP (ordvetor.h) que é criada pelo usuário que usar o código, e criar uma função para adicionar valores e outra para remover</b>.

- <b>OBS</b>: a função myComp presente no arquivo main.c é uma função criada para fins de teste para demonstrar que a função usada para comparar os valores pode ter qualquer critério para ordenar a lista, pode e deve ser alterada de acordo com o seu critério de ordenação.

- <b>Conhecimentos usados: Lógica de Programação, [Modularização](https://embarcados.com.br/programacao-modular-em-c/)</b>.

## <b>Como baixar o código na sua máquina:</b>
- Para baixar o  código diretamente <b>[CLIQUE AQUI](https://github.com/WellingtonLSoares/ordArray/archive/refs/heads/main.zip)</b>.

- Ou baixe o programa usando o comando <b>git clone</b>, porém é preciso ter o git instalado na sua máquina:
```
git clone https://github.com/WellingtonLSoares/ordArray
```

## <b>Como compilar o código:</b>
- Neste exemplo usaremos o <b>GCC</b> para compilar o código então se você não tiver o <b>GCC</b> instalado na sua máquina a compilação não poderá ser feita.

- No mesmo diretório do arquivo baixado execute o seguinte comando no terminal:
```
gcc main.c ordvetor.c -o nome-do-programa
```

## <b>Como executar o código:</b>
- Se tudo ocorreu bem no passo anterior foi gerado um arquivo na pasta do projeto com o nome <b>nome-do-programa</b>.

- Para executar o arquivo escreva o seguinte comando no terminal:
```
./nome-do-programa
```

## <b>Exemplo de compilação e execução do código:</b>
```
wellington@wellignton-13:~/C/LaboratorioDeProgramacao/TR4$ gcc main.c ordvetor.c -o main
wellington@wellignton-13:~/C/LaboratorioDeProgramacao/TR4$ ./main
INCLUINDO... 
VETOR DE 10 TAMANHO:
 90  80  70  60  50  40  30  20  10  0 
REMOVENDO!VETOR DE 9 TAMANHO:
 80  70  60  50  40  30  20  10  0
```

### <b>Aproveite o código</b>✌️		