<div align="justify">

<div align="center">

# Algoritmos de Ordenação
#### Sorting Algorithms
![vscode](https://img.shields.io/badge/VSCode-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white) ![c++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black) ![macOS](https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=apple&logoColor=white)

[BubbleSort](#1---bubblesort) | [InsertionSort](#2---insertionsort) | [SelectionSort](#3---selectionsort) | [QuickSort](#4---quicksort) | [Referências](#8---referências) | [Compilação e Execução](#compilação-e-execução)

</div>

Este repositório possui o intuito de apresentar de forma direta e clara alguns dos principais algoritmos de ordenação utilizados na ciência da computação.
### 1 - BubbleSort

O algoritmo da bolha, como é conhecido, é o algoritmo de ordenação mais simples de acordo com a literatura. Consiste em percorrer o vetor várias vezes, executando trocas de posição conforme a regra de ordenação desejada - crescente ou decrescente. O BubbleSort faz as comparações do seu índice *i* com seu próximo, *i+1* e então, conforme a regra de ordenação, se necessário, faz a troca(Swap). Abaixo, há um pseudocódigo para a ordenação de forma crescente utilizando BubbleSort.

```
Procedimento BUBBLE_SORT(vetor vec){

    Para i até n.size() - 1 faça:
        Para j até n.size() - 1 faça:

            Se vec[j] > vec[j+1]:
                
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

Exemplo do Algoritmo BubbleSort - Imagem retirada do blog *Nerds-Attack*
</div>

> BubbleSort é um algoritmo de ordenação lento, com custo $\mathcal{O}(n^2)$ para seu pior caso e caso médio.
> Seu melhor caso é quando o vetor ou lista está totalmente ordenado - complexidade $\mathcal{O}(n).$

### 2 - InsertionSort

O Algoritmo de ordenação por Inserção é outro algoritmo simples. Sua principal característica está em mover os valores para inserir o valor na posição desejada, com o intuito de ordenar a cada interação, seja de forma crescente ou decrescente. O pseudocódigo abaixo deixa evidente como o InsertionSort funciona.

````
Procedimento InsertionSort(vetor vec){

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

            Se vec[j] < vec[menor_idx]:

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

A partir deste tópico, tem-se os algoritmos de ordenação mais complexos, contúdo, mais rápidos. O QuickSort é um destes algoritmos, ele utiliza a estratégia de **Divisão e Conquita (DC)** - *Capítulo 4, Cormen*. Além disso, conforme a literatura, é implementado utilizando recursão.
O algoritmo QuickSort implementado neste respositório está de acordo com a literatura de referência - *Capítulo 7, Cormen*. Os pseudocódigos abaixo apresentam o funcionamento interno do algoritmo.

````
Função ProcuraPivô(vec, p, r){
    
    pivô = vec[r] // recebe o ultimo elemento do vetor
    i = p - 1

    Para j = p até j < r faça:
        
        // Para ordenar de forma decrescente, basta alterar para >=
        Se vec[j] <= pivô:

            i = i + 1
            Troca(vec[i],vec[j]) // Faz Swap

        Fim-Se
    Fim-Para

    Troca(vec[i+1],vec[r])

    Retorna i+1
}
````

````
Procedimento QuickSort(vec, p, r){

    Se p < r:

        index_pivô = ProcuraPivô(vec, p, r)

        //Faz a recursão
        QuickSort(vec, p, index_pivô - 1)
        QuickSort(vec, index_pivô + 1, r)

    Fim-Se
}
````

No primeiro pseudocódigo, o procedimento para encontrar o pivô, faz um rearranjo do vetor com o intuito de separar a esquerda, todos os elementos que forem menor ou igual ao o pivô e a direita os elementos maiores que o pivô. Ambos os arranjos vão crescendo conforme o vetor é percorrido durante o procedimento. Já o segundo pseudocódigo verifica as posicões, que inicialmente serão `p = 0` e `r = vec.size() - 1` - índice do ultimo elemento. Encontra o pivô de forma a organizar o vetor e depois faz a chamada dos métodos recursivos para os dois sub-vetores, da esquerda e da direita.

<div align="center">

![QuickSort](https://upload.wikimedia.org/wikipedia/commons/a/af/Quicksort-diagram.svg)

Exemplo de ordenação pelo algoritmo QuickSort - Imagem retirada da internet
</div>

Por meio da imagem é possível ver que, primeiro o vetor foi reorganizado e o pivô utilizado foi o número 4 - índice 3. Depois disso é chamado o método QuickSort para os *sub-vetores*. E assim o processo se repete recursivamente até a ordenação ser completada.

> De forma simplificada, a complexidade do QuickSort para o algoritmo implementado, no melhor caso e no caso médio é quando a cada execução, o vetor é subdividido em partes de tamanhos iguais ou quase iguais, tendo assim, complexidade $\mathcal{O}(n\log n)$. No pior caso, quando as divisões geram sub-vetores de tamanhos diferentes, proximos de `n - 1` - sendo n o tamanho do vetor naquele instante -, tem-se a complexidade próxima ou igual de $\mathcal{O}(n^2)$. O pior caso ocorre quando o pivô escolhido é o menor ou o maior elemento do vetor a ser ordenado.

> Como o QuickSort é um algoritmo mais complexo que os demais vistos neste repositório. Há na literatura de referência [1](#8---referências), nas secções 7.2 a 7.4, a análise da complexidade de cada caso do QuickSort.

> Existem outras formas de implementar o QuickSort, as mais comuns são: Encontrar o pivô de forma aleatória e utilizar múltiplos pivôres (multipivô).

### 5 - Considerações Finais

Foram apresentados quatro algoritmos de ordenação. Os três primeiros são simples de serem compreendidos e implmentados, entretanto são algoritmos lentos para um grande número de entradas. O Último algoritmo apresentado, se baseia na estratégia de **Divisão e Conquista**. No melhor caso e no caso médio, o Quicksort é mais rápido que os demais algoritmos, entretanto, se aconteçer de cair no pior caso, será tão lento quanto os demais.

**Mergesort** e **Heapsort** são dois algoritmos de ordenação que têm a complexidade logarítimica. Tanto para o algoritmo [Quicksort](#4---quicksort) quanto para o Mergesort e o Heapsort, seria necessário um único Readme para cada um, para explicar a análise de seus casos - O Quicksort foi apresentado de forma muito simplificada neste reposiório, por isso foi devidamente referenciado para um melhor estudo posteriormente. 

Dessa forma, caso você leitor queira abranger mais os estudos de algoritmos de ordenação, para o Heapsort, a literatura principal de referência, no *Capítulo 6, Cormen*, abrange toda a teoria e apresenta o pseudocódigo. Para o Mergesort, acredito que seja melhor olhar neste [link](https://joaoarthurbm.github.io/eda/posts/merge-sort/).

### 6 - Referências

* [1] Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein. **Algoritmos:  Teoria e Prática**. 3a edição. Elsevier, 2012. ISBN 9788535236996
* [2] Nivio Ziviani. **Projetos de Algoritmos: com Implementaão em Pascal e C**. 3a edição. Cengage, 2017. ISBN 978-8522110506

## Compilação e Execução
Utilize os comandos conforme suas funcões para compilar e executar.

| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
</div>

<div style="color: red">
*Contribuições são bem-vindas! 
</div>
