#include <iostream>
#include<fstream>
#include <string>
int
main(){
// 1. Definição do nome do arquivo e conteúdo
std::string nomeArquivo =
"arquivo-01.txt"
; std::string conteudo =
"Estudando Modos de Acesso: Usuario vs Kernel.\n"
;
// 2. Criação do objeto de fluxo de saída (ofstream)
// Aqui ocorre uma Chamada de Sistema para o Kernel criar/abrir o arquivo
std::ofstream
arquivo
(nomeArquivo)
;
// 3. Verificação de erros (O Kernel informa se o acesso foi permitido)
if
(arquivo.
is_open
()) {
// 4. Escrita dos dados
// O buffer da aplicação é enviado para o Kernel via System Call 'write'
arquivo << conteudo; arquivo <<
"Escrita realizada com sucesso utilizando fstream."
<< std::endl;
// 5. Fechamento do arquivo
// Outra System Call para liberar o descritor de arquivo no Kernel
arquivo.
close
(); std::cout <<
"Arquivo '"
<< nomeArquivo <<
"' criado e escrito com sucesso!"
<< std::endl; }
else
{
// Caso o Kernel negue o acesso (ex: falta de permissão na pasta)
std::cerr <<
"Erro ao abrir o arquivo para escrita."
<< std::endl;
return
1
; }
return 0;
}