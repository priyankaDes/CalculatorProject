pipeline {
    agent any

    stages {

        stage('Prepare Workspace') {
            steps {
                bat '''
                    if exist build rmdir /s /q build
                    mkdir build
                '''
            }
        }

        stage('Configure CMake') {
            steps {
                bat '''
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
                    cd build\\Debug
                    calculator_tests.exe --gtest_output=xml:test_results.xml
                '''
            }
        }
    }

    post {
        always {
            junit 'build/Debug/test_results.xml'
        }
    }
}
