senate_data$year <- as.factor(senate_data$year)
senate_data$state <- as.factor(senate_data$state)
senate_data$party_simplified <- as.factor(senate_data$party_simplified)
tx_data <- subset(senate_data, state == "Texas", select = c("year", "state", "candidatevotes", "totalvotes", "party_simplified"))
library(dplyr)
, 
tx_data %>% 
  group_by(party_simplified) %>% 
  summarize(mean_votes = round(mean(candidatevotes), 0), 
            median_votes = round(median(candidatevotes), 0))
tx_data %>% 
  filter(party_simplified == "Democratic" & candidatevotes > 0) %>% 
  select(year)
library(ggplot2)

rep_mean <- mean(tx_data$candidatevotes[tx_data$party_simplified == "Republican"])

ggplot(data = tx_data %>% filter(party_simplified == "Republican"), aes(x = year, y = candidatevotes)) + 
  geom_bar(stat = "identity") + 
  ggtitle("Number of Votes for Republican Candidates in Texas") + 
  xlab("Year") + 
  ylab("Number of Votes") +
  geom_hline(yintercept = rep_mean, color = "red", linetype = "dashed") + 
  scale_y_continuous(labels = scales::comma) + 
  scale_x_discrete(limits = unique(tx_data$year)) + 
  theme(axis.text = element_text(angle = 90, hjust = 1))
library(ggplot2)

pop_data <- read.csv("PATH_TO_FILE/Texas_Population_Data.csv")
tx_data <- merge(tx_data, pop_data, by = "year")

tx_data$normalized_votes <- tx_data$totalvotes/tx_data$population*1000

ggplot(data = tx_data, aes(x = year, y = normalized_votes)) + 
  geom_bar(stat = "identity") + 
  ggtitle("Normalized Total Votes by Year in Texas") + 
  xlab("Year") + 
  ylab("Votes per 1000 People") +
  scale_y_continuous(labels = scales::comma) + 
  scale_x_discrete(limits = unique(tx_data$year)) + 
  theme(axis.text = element_text(angle = 90, hjust = 1))
