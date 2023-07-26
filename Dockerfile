# Define a imagem base que será utilizada (pode ser uma imagem do LoadRunner pré-configurada)
FROM loadrunner-image:latest

# Instala as dependências necessárias para o GitLab CI/CD
RUN apt-get update -y \
    && apt-get install -y git curl

# Configura as variáveis de ambiente necessárias para o LoadRunner
ENV LR_PATH=/path/to/loadrunner
ENV LR_SCRIPT=/path/to/loadrunner_script

# Clona o repositório contendo os scripts de teste do LoadRunner
RUN git clone <URL_DO_REPOSITORIO_GIT> $LR_PATH

# Define o diretório de trabalho dentro do container
WORKDIR $LR_PATH

# Comando para iniciar o teste de performance utilizando o LoadRunner
CMD ["loadrunner_executable", "-Test", "$LR_SCRIPT"]
