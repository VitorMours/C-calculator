# Entrada de IO de Forma segura
Lidando com entrada de usuário, podemos ter vários tipos de problema o qualdevemos no blindar, como buffer overflow e leituras em branco. Com isso, temos que atualmente o método mais seguro de fazer a entrada de dados por 
um usuário, seria por meio do `fgets`, que é um metodo nativo da linguagem C.

Temos que comparado ao `gets` por exemplo, ele é mais seguro porque o gets 
espera encontrar uma quebra de linha para que sua entrada seja finalizada, de 
forma que pode gerar diversos tipos de problemas dentro dos nossos sistemas.

Com isso, temos que a maneira mais segura, seria usar o fgets, pois ele necessita que especifiquemos o tamanho do input que desejamos, e precisamos especificar que ele somente será atribuído, se o valor preencher um conjunto de normativas que são verificadas por meio de variáveis condicionais booleanas


```C
// Vai preencher essa variavel com o valor dela por meio do stdin, e nao pode ser vazio
if(fgets(b_char, sizeof(b_char), stdin) != NULL){}
```

# Atof
Quando vamos lidar com valores flutuantes dentro da linguagem C, mas recebemos
o valor como uma string, ou como um caractere ASCII mais precisamente falando,
precisamos que esse valor seja convertido, e convenientemente a linguagem C
já possui uma função que consegue, e pode ser responsável por isso, sendo a 
função `atof()`, essa função literalmente significa `ASCII to Float`,  ou seja,
transformar um valor de ascii em float de forma que ele consiga ser usado 
numericamente, como mostrado dentro do nosso código e dentro do seguinte exemplo:


```C
char b_char[10];
float b = 0;

if(fgets(b_char, sizeof(b_char), stdin) != NULL){
    b = atof(b_char);
}
```

# _WIN32 e _WIN64

Temos que essa flags que estamos usando são usadas para determinar que sistema operacional está sendo usando dentro do nosso sistema. Esse tipo de flag permite que 
como dentro do programa, executemos comandos do próprio sistema operacional, de forma a facilitar a forma como podemos manipular elementos do sistema, e do terminal por exemplo.
Nesse caso, temos que foi adicionado o processo de limpeza do terminal quando usamos essa flag para saber se usaríamos o comando presente em sistemas windows, ou o comando usado
em sistemas UNIX


