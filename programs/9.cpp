#include <iostream>

int main() {
    // Предполагаемые массы планет в килограммах
    double massMercury = 3.285e23;
    double massVenus = 4.867e24;
    double massEarth = 5.972e24;
    double massMars = 6.39e23;
    double massJupiter = 1.898e27;
    double massSaturn = 5.683e26;
    double massUranus = 8.681e25;
    double massNeptune = 1.024e26;

    // Расчет общей массы всех планет
    double totalMass = massMercury + massVenus + massEarth + massMars + massJupiter + massSaturn + massUranus + massNeptune;

    // Расчет среднего арифметического масс планет
    double averageMass = totalMass / 8;

    // Расчет масс каждой планеты в процентном соотношении
    double percentMercury = (massMercury / totalMass) * 100;
    double percentVenus = (massVenus / totalMass) * 100;
    double percentEarth = (massEarth / totalMass) * 100;
    double percentMars = (massMars / totalMass) * 100;
    double percentJupiter = (massJupiter / totalMass) * 100;
    double percentSaturn = (massSaturn / totalMass) * 100;
    double percentUranus = (massUranus / totalMass) * 100;
    double percentNeptune = (massNeptune / totalMass) * 100;

    // Расчет во сколько раз масса самой крупной планеты больше суммы масс остальных планет
    double sumOtherPlanets = totalMass - massJupiter;
    double timesLarger = massJupiter / sumOtherPlanets;

    // Вывод результатов
    std::cout << "Общая масса всех планет: " << totalMass << " кг" << std::endl;
    std::cout << "Среднее арифметическое масс планет: " << averageMass << " кг" << std::endl;
    std::cout << "Масса Меркурия в процентах: " << percentMercury << "%" << std::endl;
    std::cout << "Масса Венеры в процентах: " << percentVenus << "%" << std::endl;
    std::cout << "Масса Земли в процентах: " << percentEarth << "%" << std::endl;
    std::cout << "Масса Марса в процентах: " << percentMars << "%" << std::endl;
    std::cout << "Масса Юпитера в процентах: " << percentJupiter << "%" << std::endl;
    std::cout << "Масса Сатурна в процентах: " << percentSaturn << "%" << std::endl;
    std::cout << "Масса Урана в процентах: " << percentUranus << "%" << std::endl;
    std::cout << "Масса Нептуна в процентах: " << percentNeptune << "%" << std::endl;
    std::cout << "Масса самой крупной планеты в " << timesLarger << " раз больше, чем сумма масс остальных планет." << std::endl;

    return 0;
}
