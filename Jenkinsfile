pipeline {
    agent any

    stages {

        stage('Configure CMake') {
            steps {
                bat '''
                    mkdir build
                    cd build
                    cmake .. -A x64
                '''
            }
        }

        stage('Build') {
            steps {
                bat '''
                    cd build
                    cmake --build . --config Debug
                '''
            }
        }

        stage('Run Tests') {
            steps {
                bat '''
                    cd build
                    ctest -C Debug --output-on-failure
                '''
            }
        }
    }

    post {
        always {
            junit 'build/**/*.xml'
        }
    }
}
