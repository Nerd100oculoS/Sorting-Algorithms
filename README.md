<div align="justify">

<div align="center">

# Algoritmos de Ordenação
#### Algorithms of Ordination
![vscode](https://img.shields.io/badge/VSCode-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white) ![c++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black) ![macOS](https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=apple&logoColor=white)

[BubbleSort](#1---bubblesort) | [InsertionSort](#2---insertionsort) | [SelectionSort](#3---selectionsort) | [QuickSort](#4---quicksort) | [MergeSort](#5---mergesort) | [HeapSort](#6---heapsort) | [Conclusão](#7---conclusão) | [Referências](#8---referências) | [Compilação e Execução](#compilação-e-execução)

</div>

Este repositório possui o intuito de apresentar de forma direta e clara alguns dos principais algoritmos de ordenação utilizados na ciência da computação.
### 1 - BubbleSort

O algoritmo da bolha, como é conhecido, é o algoritmo de ordenação mais simples de acordo com a literatura. Consiste em percorrer o vetor várias vezes, executando trocas de posição conforme a regra de ordenação desejada - crescente ou decrescente. O BubbleSort faz as comparações do seu índice *i* com seu próximo, *i+1* e então, conforme a regra de ordenação, se necessário, faz a troca(Swap). Abaixo, há um pseudocódigo para a ordenação de forma crescente utilizando BubbleSort.

```
Procedimento BUBBLE_SORT(vetor vec){

    Para i até n.size() - 1 faça:
        Para j até n.size() - 1 faça:

            Se vec[j] > vec[j+1]
                
                //Faz Swap
                aux = vec[j]
                vec[j] = vec[j+1]
                vec[j+1] = aux

            Fim-Se
        Fim-Para
    Fim-Para
}
```
O primeiro *loop* é para percorrer o vetor até o penultimo elemento. É o segundo *loop* mais internom, é o que será iniciado varias vezes conforme o tamanho do vetor ou lista a ser ordenado.

<div align="center">

![bubble](https://3.bp.blogspot.com/-pXF1nujk0Tg/UHHRCLUA7WI/AAAAAAAAAXA/l6DiIebY1Rg/s1600/bubblesort.png)

Exemplo do Algoritmo BubbleSort - Imagen retirada de *Nerds Attack*
</div>

> BubbleSort é um algoritmo de ordenação lento, com custo $\mathcal{O}(n^2)$ para seu pior caso e caso médio.
> Seu melhor caso é quando o vetor ou lista está totalmente ordenado - complexidade $\mathcal{O}(n).$

### 2 - InsertionSort

O Algoritmo de ordenação por Inserção é outro algoritmo simples. Sua principal característica está em mover os valores para inserir o valor na posição desejada, com o intuito de ordenar a cada interação, seja de forma crescente ou decrescente. O pseudocódigo abaixo deixa evidente como o InsertionSort funciona.

````
Procedimento InsertionSor(vetor vec){

    Para j = 1 até vec.size() faça:

        key = vec[j]
        i = j - 1

        Enquanto i >= 0 && vec[i] > key faça:
            
            //Move os valores do vetor
            vec[i+1] = vec[i]
            i = i - 1 

        Fim-Enquanto
    
        vec[i+1] = key // Adciona o valor ao lugar desejado
    Fim-Para    
}
````
Conforme o pseudocódigo acima, adaptado do livro de *Thomas H. Cormen*, percebe-se que o vetor é percorrido por meio do primeiro *loop*, seguido de outro *loop*, que existe para deslocar os valores de acordo com a regra de ordenação. Após o(s) deslocamentos o *loop* interno é encerrado e então o valor é inserido na posição.

<div align="center">

![insertion](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0f/Insertion-sort-example-300px.gif/220px-Insertion-sort-example-300px.gif)

Exemplo do Algoritmo InsertionSort - Gif retirado da internet.
</div>

> Assim como o BubbleSort, o InsertionSort é um algoritmo de ordenação lento, com complexidade $\mathcal{O}(n^2)$ para o pior caso e o caso médio.
> O seu melhor caso, também é alcançado quando o vetor ou lista está totalmente ordenado, tendo complexidade $\mathcal{O}(n)$. 

### 3 - SelectionSort

O algoritmo de ordenação por Seleção é também um outro algoritmo simples. Consiste em procurar o menor elemento de valor no vetor e troca-lo de posição. A cada nova interação, a busca pelo menor valor é feita no sub-vetor *n-i* - sendo *i* um índice do vetor. Conforme o pseudocódigo abaixo:

````
Procedimento SelectionSort(vetor vec){

    Para i até vec.size() faça:

        menor_idx = i //índice do menor valor até se iniciar o loop de busca
        
        Para j até vec.size() faça:

            Se vec[j] < vec[menor_idx]

                menor_idx = j // no indice j se encontra o menor elemento

            Fim-Se
        Fim-Para

        //Faz Swap(TROCA)
        aux = vec[i] //elemento a ser trocado de posicao
        vec[i] = vec[menor_idx] // o menor passa para posicao do antigo menor elemento setado
        vec[menor_idx] = aux // finaliza a troca

    Fim-Para
}
````
É possível notar que a cada nova interação, assume-se que o elemento de menor valor é o primeiro elemento do novo sub-vetor que será percorrido para encontrar um novo menor elemento.

<div align="center">

![insertion](https://joaoarthurbm.github.io/eda/posts/selection-sort/selection.gif)

Exemplo do Algoritmo SelectionSort - Gif retirado da internet.
</div>

> O InsertionSort, assim como os dois últimos algoritmos de ordenação apresentados [1](#1---bubblesort) e [2](#2---insertionsort), possui complexidade $\mathcal{O}(n^2)$, seja para o melhor, pior ou o caso médio.

### 4 - QuickSort

### 5 - MergeSort

### 6 - HeapSort

### 7 - Conclusão

### 8 - Referências

* Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein. **Algoritmos:  Teoria e Prática**. 3a edição. Elsevier, 2012. ISBN 9788535236996
* Nivio Ziviani. **Projetos de Algoritmos: com Implementaão em Pascal e C**. 3a edição. Cengage, 2017. ISBN 978-8522110506
* Aditya Y. Bhargava. **Entendendo Algoritmos: Um guia ilustrado para programadores e outros curiosos**. Novatec, 2017. ISBN 978-85-7522-563-9

## Compilação e Execução
Utilize os comandos conforme suas funcões para compilar e executar.

| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
</div>


