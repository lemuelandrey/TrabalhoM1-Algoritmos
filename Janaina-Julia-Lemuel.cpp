#include <iostream>
using namespace std;
int main()
{
int escolha;
    cout<< "Bem vindo(a) � hist�ria da chapeuzinho vermelho, neste jogo iremos dar algumas op��es de caminhos onde voc� acabar� em algum final da hist�ria. Cada escolha tem um final diferente, boa sorte!" <<endl;
    cout<< "Sua v� fica doente e sua m�e pede para que voc� leve comida a ela, antes ela lhe avisa sobre como o caminho est� perigoso e lhe d� duas op��es:" <<endl;
    cout<< " 1 - Caminho habitual" <<endl;
    cout<< " 2 - Atalho pela floresta" <<endl;
    cin>> escolha;
    if (escolha == 1){
        cout<< "Voc� escolheu o caminho mais seguro, por isso chegar� em seguran�a." <<"\n" "VOC� GANHOU";
    } else if (escolha == 2){
               cout<< "Voc� pegar� um atalho pela floresta." <<endl;
               cout<< "Voc� caminha por 15 minutos at� perceber algo estranho, algo ou algu�m atr�s de uma �rvore." <<endl;
               cout<< "Voc� olha novamente e percebe que � o Lobo que sua m�e avisou. O que voc� faz?" <<endl;
               cout<< " 1 - Confront�-lo" <<endl;
               cout<< " 2 - Correr" <<endl;}
    cin>> escolha;
    if (escolha == 1){
        cout<< "Voc� fala: O que voc� quer lobo?" <<endl;
        cout<< "Ele lhe responde: Estou com fome, o que h� nesta cesta?" <<endl;
        cout<< "Voc� responde: P�es e frutas, para minha av� que est� doente." <<endl;
        cout<< "Voc� vira as costas e caminha para longe do lobo." <<"\n" "VOC� GANHOU" <<endl;
    } else if ( escolha == 2) {
               cout<< "Voc� corre, com medo, entretanto o lobo percebe seu medo e corre atr�s para lhe alcan�ar." <<endl;
               cout<< "No meio desse caminho voc� passa por um jardim lindo. Voc� para e pega uma flor?" <<endl;
               cout<< " 1 - Sim" <<endl;
               cout<< " 2 - N�o" <<endl;}
    cin>> escolha;
    if (escolha ==1){
        cout<< "Voc� para e apanha as rosas, mas devido a parada o lobo lhe alcan�a." <<"\n" "FIM DE JOGO" <<endl;
    } else if ( escolha ==2) {
               cout<< "Voc� corre at� que avista a casa da sua av�, algo est� errado." <<endl;
               cout<< "Voc� percebe que sua av� n�o est� em casa, ent�o voc� escuta um barulho de dentro do quarto, voc� pode escolher entre:" <<endl;
               cout<< " 1 - Entrar no quarto" <<endl;
               cout<< " 2 - Ir at� a feira onde sua v� sempre estava e a procurar" <<endl;}
    cin>> escolha;
    if (escolha ==1){
        cout<< "Voc� encontra a cama da sua av� vazia. Voc� sair� para procur�-la?" <<endl;
        cout<< " 1 - Sim" <<endl;
        cout<< " 2 - N�o" <<endl;
    } else if ( escolha == 2 ){
               cout<< "Voc� caminha at� a feira e encontra sua av� abatida. Segue at� ela e ela lhe diz: �Imaginei que n�o viria, por isso sa� para comprar comida" <<endl;
               cout<< "Voc� comunica sua av� do que lhe aconteceu no caminho, sua av� come�a a procurar pelo ca�ador e voc� segue para casa." <<endl;
               cout<< "Sua av� chega em casa ap�s encontrar o ca�ador e voc�s s�o salvas do lobo pelo ca�ador" <<"\n" "VOC� GANHOU" <<endl;}
    cin>> escolha;
    if (escolha ==1){
        cout<< "Voc� sai da casa, e come�a a procur�-la pela rua, at� que avista um ca�ador e pergunta se ele viu sua av�, ele afirma que sim. Sua av� tinha um pulo de paraquedas marcado para aquele dia:" <<endl;
        cout<< " 1 - Voc� a encontra e pula de paraquedas com ela" <<endl;
        cout<< " 2 - Voc� a encontra e apenas observa sua av� saltar e volta para casa feliz" <<endl;
    } else if ( escolha == 2){
               cout<< "Voc� n�o vai procurar sua av� e volta para casa frustrado(a) ap�s falhar em encontr�-la." <<"\n" "FIM DE JOGO" <<endl;}
    cin>> escolha;
    if (escolha == 1){
        cout<< "VOC� GANHOU";
    } else if (escolha == 2){
               cout<< "VOC� GANHOU";}
return 0;
}

