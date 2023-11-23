#include <iostream>
#include "LogDatabase/include/LogDatabase.hpp"
#include "SerialCommunication/include/SerialCommunication.hpp"


main() {
    LogDatabase database;

    int choice = -1;
        while (choice != 0) {
            std::cout << "----- Menu Principal -----\n";
            std::cout << "1. Enviar Comando\n";
            std::cout << "2. Listar Dados de Eventos entre Datas\n";
            std::cout << "0. Sair\n";
            std::cout << "Escolha uma opção: ";
            std::cin >> choice;

            if (!std::cin) { 
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                continue;
            }

            switch (choice) {
                case 1:
                    int choice1 = -1;
                    while (choice1 != 0) {
                         std::cout << " Enviar Comando\n";
                         std::cout << "1. Enviar parametro de Configuração\n";
                         std::cout << "2. Solicitar dados armazenados\n";
                         std::cout << "0. Sair\n";
                         std::cout << "Escolha uma opção: ";
                         std::cin >> choice1;
                    

                        if (!std::cin) { 
                            std::cin.clear(); 
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                            continue;
                        }

                        switch (choice1) {
                            case 0:
                                 std::cout << "Saindo...\n";
                                 break;
                            case 2:
                                int id = 1;
                                std::cout << "Informe o ID do controlador: \n";
                                try{
                                    std::cin >> id;
                                }catch(std::exception& e){
                                    std::cout  << "Digite um numero\n";
                                    break;
                                }
                                if(id < 0 || id > 255){
                                    std::cout << "ID inválido\n";
                                    break;
                                }
                                SerialCommunication *serial = new SerialCommunication("COM3");

                                try{
                                    serial->sendCommand(commandType::READ, id, 0, 0);
                                    std::cout << "Comando enviado, aguardando os dados\n";
                                    std::vector<unsigned char> data = serial->receiveLogs();
                                    
                                    std::cout << "Dados recebidos, armazenando os dados\n";
                                }catch(std::exception& e){
                                    std::cout << "Erro ao enviar comando, tente novamente\n";
                                    break;
                                }
                                


                                delete serial;
                                

                                break;
                            case 1:
                                std::cout << " Sem implementação\n"; 
                                break;
                            default:
                                std::cout << "Opção inválida. Tente novamente.\n";
                        } 
                    }        
                    break;
                case 2:
                    // Implementação de Listar Dados de Eventos entre Datas
                    break;
                case 0:
                    std::cout << "Saindo...\n";
                    break;
                default:
                    std::cout << "Opção inválida. Tente novamente.\n";
            }
        }
}