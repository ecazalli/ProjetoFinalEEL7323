#include <iostream>
#include "LogDatabase/include/LogDatabase.hpp"
#include "SerialCommunication/include/SerialCommunication.hpp"
<<<<<<< HEAD
#include <limits>

int main() {
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
            case 1: {
                int choice1 = -1;
                while (choice1 != 0) {
                    std::cout << "Enviar Comando\n";
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
                        case 0:{
                            std::cout << "Saindo...\n";
                            break;
                        } 
                        case 1:{
                            std::cout << "Sem implementação\n"; 
                            break; 
                        } 
                        case 2: {
                            int id = 0;
                            std::cout << "Informe o ID do controlador: \n";
                            std::cin >> id;

                            if (!std::cin) { 
                                std::cin.clear(); 
                                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                                std::cout << "ID inválido\n";
                                break;
                            }                         

                            if(id == 0){
                                std::cout << "ID inválido\n";
                                break;
                            }
                            SerialCommunication *serial = nullptr;

                            try{
                                serial = new SerialCommunication("COM3");
                                std::cout << "Solicitando dados\n";
                                std::vector<logData> logs = serial->receiveLogs(id);
                                if(logs.size() == 0){
                                    std::cout << "Nenhum dado recebido\n";
                                    break;
                                }
                                std::cout << "Dados recebidos, armazenando os dados\n";
                                for(int i = 0; i < logs.size(); i++){
                                    database.AddLog(logs[i]);
                                }
                            }catch(std::exception& e){
                                std::cout << "Erro: " << e.what() << "\n";
                                break;
                            }                          

                            delete serial;
                            break;
                        }
                        default:
                        std::cout << "Opção inválida. Tente novamente.\n";
                    }
                }
                break;
            }
            case 2: {
                uint8_t dia, mes, ano;
                uint8_t dia2, mes2, ano2;

                std::cout << "Informe o dia inicial (dd): ";
                std::cin >> dia;
                if (!std::cin) { 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    std::cout << "Entrada inválida. Por favor, tente novamente.\n";
                    break;
                }

                std::cout << "Informe o mes inicial (mm): ";
                std::cin >> mes;
                if (!std::cin) { 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    std::cout << "Entrada inválida. Por favor, tente novamente.\n";
                    break;
                }

                std::cout << "Informe o ano inicial (yy): ";
                std::cin >> ano;
                if (!std::cin) { 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    std::cout << "Entrada inválida. Por favor, tente novamente.\n";
                    break;
                }

                std::cout << "Informe o dia final (dd): ";
                std::cin >> dia2;
                if (!std::cin) { 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    std::cout << "Entrada inválida. Por favor, tente novamente.\n";
                    break;
                }

                std::cout << "Informe o mes final (mm): ";
                std::cin >> mes2;
                if (!std::cin) { 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    std::cout << "Entrada inválida. Por favor, tente novamente.\n";
                    break;
                }

                std::cout << "Informe o ano final (yy): ";
                std::cin >> ano2;
                if (!std::cin) { 
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    std::cout << "Entrada inválida. Por favor, tente novamente.\n";
                    break;
                }

                if(dia > 31 || mes > 12 || ano > 99 || dia2 > 31 || mes2 > 12 || ano2 > 99){
                    std::cout << "Data inválida. Por favor, tente novamente.\n";
                    break;
                }

                std::cout << "Listando Dados de Eventos entre Datas\n";
                std::string logs = database.listEventsBetween({dia, mes, ano}, {dia2, mes2, ano2});
                std::cout << logs; 
                std::cout << "Dados listados\n";
                std::cout << "Pressione qualquer tecla para continuar\n";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                break;
            }
            case 0:{
                std::cout << "Saindo...\n";
                break;
            }    
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
=======


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
>>>>>>> 84eda84f8adda0bd6bdab8e4f205cb0efc014917
