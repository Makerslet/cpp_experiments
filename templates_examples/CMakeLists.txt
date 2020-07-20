cmake_minimum_required(VERSION 3.2)

add_executable(
    templates_examples
    main.cpp
    default_template_parameters.h
    common_type_example.h
    specializations.h
    deduction_guides.h
    variadic_examples.h
    assign_different_types.h
    )

set_target_properties(templates_examples PROPERTIES
    CXX_STANDARD 17)
