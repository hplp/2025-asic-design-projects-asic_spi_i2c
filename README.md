# ASIC Project - Phase III

## Team Name: 
ASIC_SPI_SERV

## Team Members:
- Kavish Ranawella (bue6zr)
- Bhasitha Dharmasena (bp2sq)

## Project Title:
TinyTapeout Design for Serial RISC-V (SERV) with SPI memory access

## Project Description:
Serial RISC-V (SERV) is a bit-serial CPU which claims to be the world's smallest RISC-V CPU. In the current implementation, even though most of the core components are serialized, Register File and Memory accessing is still done parallely via a Wishbone interface. With our FPGA project, we aim to achieve pure serialization by implementing memory access through a Serial Peripheral Interface (SPI). With the ASIC project, we aim to implement this design in TinyTapeout.

## Key Objectives:
- Learn intricate details of the OpenLane2 ASIC design flow used in TinyTapout.
- Evaluate the readiness of the SERV with SPI for a tapeout using TinyTapeout.


## Technology Stack:
Tools: Tiny Tapeout, OpenLane2, Verilator, Cocotb

Languages: Verilog, TCL


## Expected Outcomes:
- Github repository for TinyTapeout10.
- Documentation of our findings during our project.


## Tasks:
- Develop Verilog code for a Wishbone-to-SPI converter.
- Integrate the Wishbone-to-SPI converter with the SERV CPU.
- Add the design files to a TinyTapeout GitHub Repository.
- Debug and fix errors triggered by OpenLane when evaluating the design in the GDS flow.
- Verification using open source verification tool, Verilator
- Resource usage evaluation of the new approach
- Documentation

## File Structure
- [fram_connect](https://github.com/hplp/2025-asic-design-projects-asic_spi_i2c/tree/main/fram_connect): Wishbone-to-SPI convertor integrated to the SERV CPU.
- tt10-spi_serv: TinyTapeout GitHub repository added as a submodule.




### What is SERV?

<figure style="text-align: center;">
  <img src="images/serv.png" alt="serv" width="80%">
</figure>

Serial RISC-V (SERV) is bit-serial CPU that claims to be the world's smallest RISC-V CPU. It is,
- Open source (under BSD license)
- Uses Wishbone interface for Data and Instruction Buses
- Compatible with Zephyr OS (light-weight, open-source OS by Linux Foundation)

For this project, we use **Servant** which is a reference platform which packages memory, GPIO and timers with SERV to make it a standalone computer. This also uses Wishbone for the memory interfaces.

### Wishbone vs SPI (Serial Peripheral Interface)

###### Wishbone:
- A parallel synchronous protocol
- Relatively high speed - **Can access 1 word using 1 clock cycle**
- Requires high wire count **(100+ in total)**

<figure style="text-align: center;">
  <img src="images/wb_con_2.png" alt="wb_con" width="50%">
  <figcaption>Figure:Wishbone Connection</figcaption>
</figure>


###### SPI
- A synchronized serial communication protocol
- Can integrate with **4 wires total**
- A Master-Slave Architecture
- Relatively slow - **require 64 clock cycles to access 1 word** 

<figure style="margin: 0 auto; text-align: center; width: 50%;">
  <img src="images/spi_read_2.png" alt="spi_read" style="width: 100%;">
  <figcaption>Figure: SPI Connection</figcaption>
</figure>



<figure style="margin: 0 auto; text-align: center; width: 50%;">
  <img src="images/spi_read_2.png" alt="spi_read" style="width: 100%;">
  <figcaption>Figure: SPI Read Operation</figcaption>
</figure>



## Results
#### TinyTapeout Implementation

<p align="center">
  <img src="images/ttlogo_400.png" alt="utilization_error" width="30%">


The SPI-SERV design was hardened using the TinyTapeout(TT) repository. The final TT implementation made use of a totl of 3X2 tiles with a 80% placement density. The final utilization was 64.5% with a total wire length of 243537um. The picture illustrats the 3D rendered image of the final design on TT. 

<p align="center">
  <img src="images/TT_3D_rendered.png" alt="utilization_error" width="80%">
</p>

#### Cocotb Testing
TT uses cocotb for testing purposes. The cocotb testing scripts were updated to sanity test the design upon updating them. The image below shows an example of how the cocotb tests the design files for store word and load world (printing 'Yes' tests for load word specifically)

<p align="center">
  <img src="images/cocotb_tests.png" alt="utilization_error" width="80%">
  <figcaption style="text-align: center;">Figure: cocotb tests</figcaption>
</p>

#### TinyTapeout Resource Utilization
The image below shows the overview resource utilization in TT.

<p align="center">
  <img src="images/TT_resource_utilization.png" alt="utilization_error" width="80%">
  <figcaption>Figure: TinyTapeout Resource Utilization</figcaption>
</p>

#### Verification 
###### The Dining Philosophers Problem
The Dining Philosophers Problem is a classic example in computer science that illustrates issues related to synchronization, concurrency, and resource sharing. 

<p align="center">
  <img src="images/at_the_table.png" alt="utilization_error" width="40%">
</p>

* There are five philosophers sitting around a circular table.
* Each philosopher alternates between thinking and eating.
* In front of each philosopher is a plate of spaghetti, and between each pair of philosophers is one fork (so 5 philosophers, 5 forks total).
* To eat, a philosopher needs both the left and right forks.
* A philosopher must pick up the left fork and the right fork, eat, and then put them down.

The Verilog design was also verified using the open soure verification tool, Verilator. The video demo below shows how the the design was simulated for the Dining Philosophers Problem in Verilator.

<p align="center">
  <a href="https://drive.google.com/file/d/1RlvJeYeywYfrMxeHt2FA7NISYa-Ry-am/view?usp=share_link">
    <img src="images/Verilator_test.png" alt="Video Preview" width="80%">
  </a>
</p>

#### Final Overview and Outlook
The project successfully decoupls the in-built memory in SERV and successfully replaces that with an expternal SPI-FRAM. With SPI interface, the external memory can be accessed using a total of 4 wires. This also reduces the total logic footprint requirement in the SERV. This proves that it is possible to implement a external memory accessing using serial SPI protocol for SERV. Therefore with further work, it is possible to achieve a fully bit-serial architecture for SERV with SPI memory accessing. 
