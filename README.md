# Project_Template

## Team Name: 
ASIC_SPI_I2C

## Team Members:
- Kavish Ranawella (bue6zr)
- Bhasitha Dharmasena (bp2sq)

## Project Title:
Evaluating the Role of LLMs in the Synopsys ASIC Design Flow: A Case Study on an SPI-to-I2C Converter

## Project Description:
This project aims to analyze the feasibility of using Large Language Models (LLMs) to assist in the Synopsys ASIC design flow. By applying the Synopsys flow to an SPI-to-I2C converter—initially designed for an FPGA implementation—this study will categorize various steps based on their suitability for LLM-driven automation, human-assisted LLM involvement, or complete manual execution. The findings of this study will provide insights into the practical applications of LLMs in ASIC design, helping to identify areas where they can improve efficiency, reduce design effort, and minimize errors.

## Key Objectives:
- Learn intricate details of the Synopsys ASIC design flow
- Evaluate the role of LLMs in ASIC design flow
- Evaluate the LLM's capabilities in understanding hardware designs

## Technology Stack:
Tools: Synopsys Design Compiler (DC), Design for Test Compiler (DFTC), IC Compiler (ICC), Formality, PrimeTime, ChatGPT

Languages: Verilog, TCL

## Expected Outcomes:
- A set of LLM-generated scripts and constraints.
- A documented list of successful applications and challenges.
- An assessment of LLM viability in ASIC design.
- A structured report detailing findings, challenges, and recommendations.
- Potential future directions for LLM applications in semiconductor workflows

## Tasks:
- Generate a functionally verified SPI-to-I2C convertor with the help of ChatGPT (common with FPGA project) - bue6zr, bp2sq
- Generate Verilog outputs from Design Compiler (DC) along with Pre-layout Formality checks - bp2sq
- Generate Verilog outputs from Design for Test Compiler (DFTC) along with Pre-layout Formality checks - bue6zr
- Generate Verilog outputs and GDSII from IC Compiler (ICC) along with Post-layout Formality checks - bue6zr, bp2sq
- Documentation - bue6zr, bp2sq

## Timeline:
- Get functional SPI-to-I2C convertor Verilog code from the FPGA project (upto 1 week)
- Generate Verilog outputs from Design Compiler (DC) and Design for Test Compiler (DFTC) along with Pre-layout Formality checks (1 week)
- Generate Verilog outputs and GDSII from IC Compiler (ICC) along with Post-layout Formality checks (2 weeks)
- Documentation (1 week)
