FROM gcc:10.2 AS build-env
ADD . /app
WORKDIR /app
RUN g++ for.cpp -o for

FROM gcr.io/distroless/cc
COPY --from=build-env /app /app
WORKDIR /app
CMD ["./for"]
