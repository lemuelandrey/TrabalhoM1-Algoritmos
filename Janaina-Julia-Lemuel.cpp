#include <iostream>
using namespace std;
int main()
{
int escolha;
    cout<< "Bem vindo(a) à história da chapeuzinho vermelho, neste jogo iremos dar algumas opções de caminhos onde você acabará em algum final da história. Cada escolha tem um final diferente, boa sorte!" <<endl;
    cout<< "Sua vó fica doente e sua mãe pede para que você leve comida a ela, antes ela lhe avisa sobre como o caminho está perigoso e lhe dá duas opções:" <<endl;
    cout<< " 1 - Caminho habitual" <<endl;
    cout<< " 2 - Atalho pela floresta" <<endl;
    cin>> escolha;
    if (escolha == 1){
        cout<< "Você escolheu o caminho mais seguro, por isso chegará em segurança." <<"\n" "VOCÊ GANHOU";
    } else if (escolha == 2){
               cout<< "Você pegará um atalho pela floresta." <<endl;
               cout<< "Você caminha por 15 minutos até perceber algo estranho, algo ou alguém atrás de uma árvore." <<endl;
               cout<< "Você olha novamente e percebe que é o Lobo que sua mãe avisou. O que você faz?" <<endl;
               cout<< " 1 - Confrontá-lo" <<endl;
               cout<< " 2 - Correr" <<endl;}
    cin>> escolha;
    if (escolha == 1){
        cout<< "Você fala: O que você quer lobo?" <<endl;
        cout<< "Ele lhe responde: Estou com fome, o que há nesta cesta?" <<endl;
        cout<< "Você responde: Pães e frutas, para minha avó que está doente." <<endl;
        cout<< "Você vira as costas e caminha para longe do lobo." <<"\n" "VOCÊ GANHOU" <<endl;
    } else if ( escolha == 2) {
               cout<< "Você corre, com medo, entretanto o lobo percebe seu medo e corre atrás para lhe alcançar." <<endl;
               cout<< "No meio desse caminho você passa por um jardim lindo. Você para e pega uma flor?" <<endl;
               cout<< " 1 - Sim" <<endl;
               cout<< " 2 - Não" <<endl;}
    cin>> escolha;
    if (escolha ==1){
        cout<< "Você para e apanha as rosas, mas devido a parada o lobo lhe alcança." <<"\n" "FIM DE JOGO" <<endl;
    } else if ( escolha ==2) {
               cout<< "Você corre até que avista a casa da sua avó, algo está errado." <<endl;
               cout<< "Você percebe que sua avó não está em casa, então você escuta um barulho de dentro do quarto, você pode escolher entre:" <<endl;
               cout<< " 1 - Entrar no quarto" <<endl;
               cout<< " 2 - Ir até a feira onde sua vó sempre estava e a procurar" <<endl;}
    cin>> escolha;
    if (escolha ==1){
        cout<< "Você encontra a cama da sua avó vazia. Você sairá para procurá-la?" <<endl;
        cout<< " 1 - Sim" <<endl;
        cout<< " 2 - Não" <<endl;
    } else if ( escolha == 2 ){
               cout<< "Você caminha até a feira e encontra sua avó abatida. Segue até ela e ela lhe diz: “Imaginei que não viria, por isso saí para comprar comida" <<endl;
               cout<< "Você comunica sua avó do que lhe aconteceu no caminho, sua avó começa a procurar pelo caçador e você segue para casa." <<endl;
               cout<< "Sua avó chega em casa após encontrar o caçador e vocês são salvas do lobo pelo caçador" <<"\n" "VOCÊ GANHOU" <<endl;}
    cin>> escolha;
    if (escolha ==1){
        cout<< "Você sai da casa, e começa a procurá-la pela rua, até que avista um caçador e pergunta se ele viu sua avó, ele afirma que sim. Sua avó tinha um pulo de paraquedas marcado para aquele dia:" <<endl;
        cout<< " 1 - Você a encontra e pula de paraquedas com ela" <<endl;
        cout<< " 2 - Você a encontra e apenas observa sua avó saltar e volta para casa feliz" <<endl;
    } else if ( escolha == 2){
               cout<< "Você não vai procurar sua avó e volta para casa frustrado(a) após falhar em encontrá-la." <<"\n" "FIM DE JOGO" <<endl;}
    cin>> escolha;
    if (escolha == 1){
        cout<< "VOCÊ GANHOU";
    } else if (escolha == 2){
               cout<< "VOCÊ GANHOU";}
return 0;
}

