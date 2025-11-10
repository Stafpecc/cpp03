override SRC_DIR := srcs

override NAME := CLAPTRAP

override CLAPTRAP_SRC := \
	main \
	ClapTrap \
	ScavTrap \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(CLAPTRAP_SRC)))
