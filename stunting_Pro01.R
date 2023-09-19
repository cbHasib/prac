
library(readr) 
stunting_df <- read_csv("C:\\Users\\User\\Desktop\\2122117101\\Prac_FINAL\\Prac_stun_RU.csv")

cor(stunting_df$stun, stunting_df$childAge)


stunting_df4 <- stunting_df[ , c("stun", "childAge", "wi", "bmi_ch")]
cor(stunting_df4)




#---------------------------------------------
#
#   Histogram of "Stunting" and "Children age"
#
#----------------------------------------

library(ggplot2)  # Load library "ggplot2"
ggplot(stunting_df, aes(x=stun)) + geom_histogram()

ggplot(stunting_df, aes(x=childAge)) + geom_histogram()


#---------------------------------------------
#
#   Boxplot between "Stunting" and "Residential area"
#
#----------------------------------------

# Basic Boxplot
ggplot(stunting_df, aes(x=hv025, y=stun, fill = hv025)) +
  geom_boxplot() 

#|||||||||||||||||||||||| FINAL ||||||||||||||||||||||||||



# Basic Boxplot ------ TEST -----
ggplot(stunting_df, aes(x=hv025, y=stun, fill = hv025)) +
  geom_jitter(alpha = 0.01) +   # ?geom_jitter
  geom_boxplot()
