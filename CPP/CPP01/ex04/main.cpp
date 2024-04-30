/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhabibr <akhabibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:53:35 by akhabibr          #+#    #+#             */
/*   Updated: 2024/04/18 14:23:17 by akhabibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string replaceAll(std::string str, const std::string &from, const std::string &to)
{
    if (from.empty())
        return str;
    size_t start_pos = 0;
    std::string result;

    while ((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        result.append(str, 0, start_pos);
        result.append(to);
        start_pos = start_pos + from.length();
        str = str.substr(start_pos);
        start_pos = 0;
    }
    result.append(str);
    return result;
}

int main(int argc, char* argv[])
{
    if (argc != 4)
	{
        std::cerr << "Wrong number of arguments!" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];


	std::ifstream file(filename);
    if (!file.is_open())
	{
        std::cerr << "Error in file openning" << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string content = buffer.str();
    file.close();
    
	content = replaceAll(content, s1, s2);


    std::ofstream output_file(filename + ".replace");
    if (!output_file.is_open())
    {
        std::cerr << "Error of output file creation!" << std::endl;
        return 1;
    }
    output_file << content;
    output_file.close();
}
