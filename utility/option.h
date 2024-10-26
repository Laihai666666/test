//
// Created by 赖海 on 2024/10/24.
//
#pragma once
#ifndef SHELL_OPTION_H
#define SHELL_OPTION_H
#include <map>
#include <string>
#include <iostream>
#include <stdexcept>
using std::string;

    namespace lh::utility{
        class Option{
        public:
            enum Type {
                OPT_UNKNOWN=0,
                OPT_NO,
                OPT_REQUIRED,
                OPT_OPTIONAL
            };

            Option()=default;
            ~Option()=default;

            void add(const string &opt,Type type);
            [[nodiscard]] Type type(const string &opt) const;
            void parse(int argc,char *argv[]);
            void show()const;
            bool has(const string &opt)const;
            bool get_bool(const string &opt)const;
            int get_int(const string &opt)const;
            string get_string(const string &opt);
        private:
            std::map<string,Type> m_opts;
            std::map<string,string> m_args;
        };
    }






#endif //SHELL_OPTION_H
